using System;
using System.Numerics;
using System.Runtime.InteropServices;

namespace ImGuiOverlay.ABI
{
    // /////////////////////////////////////////////////////////////////////////////////////
    //  MATH STRUCTS
    // /////////////////////////////////////////////////////////////////////////////////////

    [StructLayout(LayoutKind.Sequential, Pack = 1)]
    public struct Rotator { public float Pitch, Yaw, Roll; }

    [StructLayout(LayoutKind.Sequential, Pack = 1)]
    public struct FQuat { public float X, Y, Z, W; }

    [StructLayout(LayoutKind.Sequential, Pack = 1)]
    public struct FTransform
    {
        public FQuat   Rotation;     // 0x00 (16)
        public Vector3 Translation;  // 0x10 (12)
        private float  _pad0;        // 0x1C (4)
        public Vector3 Scale3D;      // 0x20 (12)
        private float  _pad1;        // 0x2C (4)
    }

    [StructLayout(LayoutKind.Sequential, Pack = 1)]
    public struct C2WPacket
    {
        public FTransform Transform; // 0x00 (48 bytes: 0x220..0x24F)
        public uint       Ctl;       // 0x30 (4 bytes: 0x250..0x253)
    }

    [StructLayout(LayoutKind.Sequential, Pack = 1)]
    public struct RelativeLocPacket
    {
        public Vector3 Location;     // 0x00 (12 bytes: 0x170..0x17B)
        public uint    Ctl;          // 0x0C (4 bytes: 0x17C..0x17F)
    }

    [StructLayout(LayoutKind.Sequential, Pack = 1)]
    public struct FMinimalViewInfo
    {
        public Vector3 Location;
        public Rotator Rotation;
        public float   Fov;
        public float   ShadowFov;
        public float   DesiredFov;
        public float   OrthoWidth;
    }

    // /////////////////////////////////////////////////////////////////////////////////////
    //  ABI MATH  ??  World-to-screen projection + bone transform helpers
    // /////////////////////////////////////////////////////////////////////////////////////

    public static class ABIMath
    {
        private static Matrix4x4 RotationMatrix(Vector3 rotDeg)
        {
            float radPitch = rotDeg.X * (MathF.PI / 180f);
            float radYaw   = rotDeg.Y * (MathF.PI / 180f);
            float radRoll  = rotDeg.Z * (MathF.PI / 180f);

            float SP = MathF.Sin(radPitch), CP = MathF.Cos(radPitch);
            float SY = MathF.Sin(radYaw),   CY = MathF.Cos(radYaw);
            float SR = MathF.Sin(radRoll),  CR = MathF.Cos(radRoll);

            return new Matrix4x4
            {
                M11 = CP * CY,               M12 = CP * SY,               M13 = SP,
                M21 = SR * SP * CY - CR * SY, M22 = SR * SP * SY + CR * CY, M23 = -SR * CP,
                M31 = -(CR * SP * CY + SR * SY), M32 = CY * SR - CR * SP * SY, M33 = CR * CP
            };
        }

        /// <summary>No-zoom convenience overload.</summary>
        public static bool WorldToScreen(Vector3 pos, FMinimalViewInfo cam, float w, float h, out Vector2 s)
            => WorldToScreen(pos, cam, w, h, 1f, out s);

        /// <summary>Zoom-aware projection (primary). Pass zoom >= 1 when scoped.</summary>
        public static bool WorldToScreen(Vector3 pos, FMinimalViewInfo cam, float w, float h, float zoom, out Vector2 s)
        {
            if (zoom <= 0f || !float.IsFinite(zoom)) zoom = 1f;

            var rot = new Vector3(cam.Rotation.Pitch, cam.Rotation.Yaw, cam.Rotation.Roll);
            var m   = RotationMatrix(rot);

            var axisX = new Vector3(m.M11, m.M12, m.M13);
            var axisY = new Vector3(m.M21, m.M22, m.M23);
            var axisZ = new Vector3(m.M31, m.M32, m.M33);

            Vector3 delta = pos - cam.Location;

            // UE basis swap
            var t = new Vector3(
                Vector3.Dot(delta, axisY),
                Vector3.Dot(delta, axisZ),
                Vector3.Dot(delta, axisX)
            );

            if (t.Z < 0.01f) { s = default; return false; }

            float cx = w * 0.5f, cy = h * 0.5f;

            float fovTan = MathF.Tan(cam.Fov * (MathF.PI / 360f));
            float focal  = cx / (fovTan / zoom);

            s.X = cx + t.X * focal / t.Z;
            s.Y = cy - t.Y * focal / t.Z;

            return true;
        }

        [System.Runtime.CompilerServices.MethodImpl(System.Runtime.CompilerServices.MethodImplOptions.AggressiveInlining)]
        public static bool IsInScreen(Vector2 s, float w, float h)
            => s.X >= 0 && s.X <= w && s.Y >= 0 && s.Y <= h;

        public static Vector3 TransformPosition(in FTransform t, in Vector3 p)
        {
            var scaled  = new Vector3(p.X * t.Scale3D.X, p.Y * t.Scale3D.Y, p.Z * t.Scale3D.Z);
            var rotated = RotateVector(t.Rotation, scaled);
            return rotated + t.Translation;
        }

        /// <summary>Rotate a vector by a quaternion (no scale/translation).</summary>
        public static Vector3 RotateByQuat(in FQuat q, in Vector3 v)
            => RotateVector(q, v);

        /// <summary>Convert a UE Rotator (Pitch/Yaw/Roll degrees) to an FQuat.</summary>
        public static FQuat RotatorToQuat(in Rotator r)
        {
            float p = r.Pitch * (MathF.PI / 360f);
            float y = r.Yaw   * (MathF.PI / 360f);
            float ro = r.Roll  * (MathF.PI / 360f);
            float sp = MathF.Sin(p), cp = MathF.Cos(p);
            float sy = MathF.Sin(y), cy = MathF.Cos(y);
            float sr = MathF.Sin(ro), cr = MathF.Cos(ro);
            return new FQuat
            {
                X =  cr * sp * sy - sr * cp * cy,
                Y = -cr * sp * cy - sr * cp * sy,
                Z =  cr * cp * sy - sr * sp * cy,
                W =  cr * cp * cy + sr * sp * sy
            };
        }

        private static Vector3 RotateVector(in FQuat q, in Vector3 v)
        {
            var qv = new Vector3(q.X, q.Y, q.Z);
            var t  = 2f * Vector3.Cross(qv, v);
            return v + q.W * t + Vector3.Cross(qv, t);
        }

        /// <summary>
        /// Calculates the predicted future position of a moving target.
        /// </summary>
        public static Vector3 GetPredictedTargetPos(Vector3 targetPos, Vector3 targetVel, Vector3 myCamPos, float bulletSpeed, float gravityScale, float latencyComp, bool predictVel, bool predictDrop)
        {
            if (bulletSpeed <= 0f || (!predictVel && !predictDrop)) return targetPos;

            // 1. Calculate Travel Time
            float distance = Vector3.Distance(myCamPos, targetPos);
            float timeToHit = (distance / bulletSpeed) + latencyComp;

            Vector3 predictedPos = targetPos;

            // 2. Apply Horizontal Prediction
            if (predictVel)
            {
                predictedPos += (targetVel * timeToHit);
            }

            // 3. Apply Vertical Prediction (Bullet Drop)
            if (predictDrop)
            {
                // Formula: 0.5 * gravity * time^2
                float gravity = 980.0f; // UE4 Units (cm/s^2)
                predictedPos.Z += 0.5f * (gravity * gravityScale) * (timeToHit * timeToHit);
            }

            return predictedPos;
        }
    }
}