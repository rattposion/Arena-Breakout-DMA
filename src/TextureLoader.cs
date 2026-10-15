using System;
using System.IO;
using System.Runtime.InteropServices;
using StbImageSharp;
using ImGuiOverlay.Core;

namespace ImGuiOverlay
{
    public static class TextureLoader
    {
        public static unsafe nint LoadTexture(string filePath)
        {
            if (!File.Exists(filePath))
                return 0;

            byte[] fileData = File.ReadAllBytes(filePath);
            ImageResult image = ImageResult.FromMemory(fileData, ColorComponents.RedGreenBlueAlpha);

            if (image == null || image.Data == null)
                return 0;

            nint device = OverlayApp.D3DDevice;
            if (device == 0) return 0;

            D3D11_TEXTURE2D_DESC desc = new D3D11_TEXTURE2D_DESC
            {
                Width = (uint)image.Width,
                Height = (uint)image.Height,
                MipLevels = 1,
                ArraySize = 1,
                Format = 28, // DXGI_FORMAT_R8G8B8A8_UNORM
                SampleDesc = new DXGI_SAMPLE_DESC { Count = 1, Quality = 0 },
                Usage = 0, // D3D11_USAGE_DEFAULT
                BindFlags = 8, // D3D11_BIND_SHADER_RESOURCE
                CPUAccessFlags = 0,
                MiscFlags = 0
            };

            nint srv = 0;
            fixed (byte* pData = image.Data)
            {
                D3D11_SUBRESOURCE_DATA subData = new D3D11_SUBRESOURCE_DATA
                {
                    pSysMem = (nint)pData,
                    SysMemPitch = (uint)(image.Width * 4),
                    SysMemSlicePitch = 0
                };

                nint texture = 0;
                int hr = DX11.Device_CreateTexture2D(device, &desc, &subData, &texture);
                if (hr >= 0 && texture != 0)
                {
                    D3D11_SHADER_RESOURCE_VIEW_DESC srvDesc = new D3D11_SHADER_RESOURCE_VIEW_DESC
                    {
                        Format = desc.Format,
                        ViewDimension = 4, // D3D11_SRV_DIMENSION_TEXTURE2D
                        Texture2D = new D3D11_TEX2D_SRV { MostDetailedMip = 0, MipLevels = 1 }
                    };

                    hr = DX11.Device_CreateShaderResourceView(device, texture, &srvDesc, &srv);
                    DX11.Release(texture);
                }
            }

            return srv;
        }
    }
}
