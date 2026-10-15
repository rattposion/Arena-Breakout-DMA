using System;
using System.Text;
using ImGuiOverlay.DMA;

namespace ImGuiOverlay.ABI
{
    // /////////////////////////////////////////////////////////////////////////////////////
    //  ABI NAME POOL  —  Reads FName strings from the game's encrypted GNames pool.
    //  Updated for ABI BuildID 25032234 / September 2026 (Dynamic Mask + Block 0 verification)
    // /////////////////////////////////////////////////////////////////////////////////////

    public static class ABINamePool
    {
        private static readonly System.Collections.Concurrent.ConcurrentDictionary<uint, string> _cache = new();
        private static byte _effectiveMask;
        private static bool _maskResolved;
        private static byte _lastKey;

        private static ulong GNamesAddr => DmaMemory.Base + ABIOffsets.GNames;

        private static byte ResolveEffectiveMask()
        {
            byte rawKey = DmaMemory.Read<byte>(DmaMemory.Base + ABIOffsets.FNameDecrypt);
            if (!_maskResolved || rawKey != _lastKey)
            {
                _lastKey = rawKey;
                byte d = (byte)(((rawKey >> 5) & 2) ^ rawKey);
                byte c = (byte)(((d & 2) << 5) ^ d);
                _effectiveMask = (byte)(((c >> 5) & 2) ^ c ^ 0x65);

                // Self-validation against Block 0 ("None")
                ulong block0 = DmaMemory.Read<ulong>(GNamesAddr + 0x10);
                if (block0 > 0x10000 && block0 < 0x7FFFFFFFFFFF)
                {
                    byte b0 = DmaMemory.Read<byte>(block0 + 0x02);
                    byte dynamicMask = (byte)(b0 ^ (byte)'N');
                    byte b1 = DmaMemory.Read<byte>(block0 + 0x03);
                    if ((byte)(b1 ^ dynamicMask) == (byte)'o')
                    {
                        _effectiveMask = dynamicMask;
                    }
                }
                _maskResolved = true;
                _cache.Clear();
            }
            return _effectiveMask;
        }

        public static void Clear()
        {
            _maskResolved = false;
            _cache.Clear();
        }

        public static string GetName(uint key)
        {
            if (key == 0) return "None";
            if (_cache.TryGetValue(key, out var cached)) return cached;

            try
            {
                uint   chunk  = key >> 16;
                ushort offset = (ushort)key;

                ulong poolChunk = DmaMemory.Read<ulong>(GNamesAddr + 0x10 + ((ulong)chunk * 8));
                if (poolChunk < 0x10000) return string.Empty;

                ulong entry = poolChunk + (ulong)(2 * offset);

                short header = DmaMemory.Read<short>(entry);
                bool  isWide = (header & 1) != 0;
                int   len    = header >> 6;
                if (len <= 0 || len > 512) return string.Empty;

                byte xorMask = ResolveEffectiveMask();

                string name;
                if (isWide)
                {
                    int byteLen = len * 2;
                    byte[]? buf = DmaMemory.ReadBytes(entry + 2, (uint)byteLen);
                    if (buf == null || buf.Length < byteLen) return string.Empty;
                    FNameDecrypt(buf, byteLen, xorMask);
                    name = Encoding.Unicode.GetString(buf, 0, byteLen).TrimEnd('\0');
                }
                else
                {
                    byte[]? buf = DmaMemory.ReadBytes(entry + 2, (uint)len);
                    if (buf == null || buf.Length < len) return string.Empty;
                    FNameDecrypt(buf, len, xorMask);
                    name = Encoding.ASCII.GetString(buf, 0, len).TrimEnd('\0');
                }

                if (!string.IsNullOrEmpty(name)) _cache.TryAdd(key, name);
                return name;
            }
            catch { return string.Empty; }
        }

        /// <summary>
        /// Single-pass XOR string decryption with dynamic effective mask.
        /// </summary>
        internal static void FNameDecrypt(byte[] input, int nameLength, byte xorMask)
        {
            if (nameLength <= 0 || input == null) return;
            if (nameLength > input.Length) nameLength = input.Length;

            for (int i = 0; i < nameLength; ++i)
            {
                input[i] ^= xorMask;
            }
        }
    }
}
