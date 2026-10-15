using System.Buffers.Binary;
using System.Collections.Concurrent;
using System.Globalization;
using System.Numerics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using ImGuiOverlay.ABI;
using ImGuiOverlay.Input;
using VmmSharpEx;
using VmmSharpEx.Extensions;
using VmmSharpEx.Options;
using VmmSharpEx.Refresh;
using VmmSharpEx.Scatter;
using VFlags = VmmSharpEx.Options.VmmFlags;
using VmmFlags = ImGuiOverlay.Input.VmmFlags;

namespace ImGuiOverlay.DMA;

public static class DmaMemory
{
    // ��������������������������������������������������������������������������������������������������������������������������������������������������
    //  Target
    // ��������������������������������������������������������������������������������������������������������������������������������������������������
    public const string TargetExe    = "UAGame.exe";
    public const string TargetModule = "UAGame.exe"; // change to UnityPlayer.dll if needed

    // ��������������������������������������������������������������������������������������������������������������������������������������������������
    //  State
    // ��������������������������������������������������������������������������������������������������������������������������������������������������
    private static Vmm? _vmm;

    public static uint  Pid        { get; private set; }
    public static ulong Base       { get; private set; }
    public static bool  IsReady    { get; private set; }
    public static bool  IsAttached => _vmm is not null && Pid != 0 && Base != 0;
    public static Vmm?  Vmm        => _vmm;
    public static bool  IsTableOffsetResolved { get; private set; } = true;

    // ��������������������������������������������������������������������������������������������������������������������������������������������������
    //  Events
    // ��������������������������������������������������������������������������������������������������������������������������������������������������
    public static event Action? OnAttached;
    public static event Action? OnDetached;

    // ��������������������������������������������������������������������������������������������������������������������������������������������������
    //  Init / Dispose
    // ��������������������������������������������������������������������������������������������������������������������������������������������������

    /// <summary>
    /// Initialize VMM and start the background attach loop.
    /// Safe to call once from Program.cs.
    /// </summary>
    public static void Init(string device = "fpga", bool useMemMap = true)
    {
        Console.WriteLine("[DMA] Initializing VMM...");

        var args = new List<string> { "-printf", "-v", "-device", device, "-waitinitialize" };

        try
        {
            _vmm = new Vmm(args.ToArray());

            if (useMemMap)
            {
                const string mmapFile = "mmap.txt";
                try
                {
                    Console.WriteLine("[DMA] Applying memory map...");
                    _ = _vmm.GetMemoryMap(applyMap: true, outputFile: mmapFile);
                    Console.WriteLine($"[DMA] mmap written to {Path.GetFullPath(mmapFile)}");
                }
                catch (Exception ex)
                {
                    Console.WriteLine($"[DMA] mmap warning: {ex.Message}");
                }
            }

            _vmm.RegisterAutoRefresh(RefreshOption.MemoryPartial, TimeSpan.FromMilliseconds(300));
            _vmm.RegisterAutoRefresh(RefreshOption.TlbPartial,    TimeSpan.FromSeconds(2));

            Console.WriteLine("[DMA] VMM ready. Starting attach loop...");
            new Thread(AttachLoop) { IsBackground = true, Name = "DMA-AttachLoop" }.Start();
            InitInputDevices();
        }
        catch (Exception ex)
        {
            Console.WriteLine($"[DMA] FATAL �� VMM init failed: {ex}");
            throw;
        }
    }
    // ��������������������������������������������������������������������������������������������������������������������������������������������������
    //  Input device init  (fire-and-forget thread �� never blocks DMA startup)
    // ��������������������������������������������������������������������������������������������������������������������������������������������������

    private static void InitInputDevices()
    {
        // InputManager (kernel-level input via VMM)
        try
        {
            var adapter = new VmmSharpExAdapter(_vmm!);
            InputManager.BeginInitializeWithRetries(
                adapter,
                TimeSpan.FromSeconds(1),
                onComplete: (ok, err) =>
                {
                    if (ok) Console.WriteLine("[+] InputManager ready.");
                    else    Console.WriteLine($"[-] InputManager init failed: {err}");
                });
        }
        catch (Exception ex)
        {
            Console.WriteLine($"[-] InputManager init exception: {ex.Message}");
        }

        // Makcu serial mouse device
        try
        {
            if (Device.AutoConnectMakcu())
                Console.WriteLine("[+] Makcu connected.");
            else
                Console.WriteLine("[-] Makcu not found �� mouse moves disabled.");
        }
        catch (Exception ex)
        {
            Console.WriteLine($"[-] Makcu init exception: {ex.Message}");
        }
    }
    public static void Dispose()
    {
        try { _vmm?.Dispose(); } catch { }
        _vmm = null;
        Pid  = 0;
        Base = 0;
        IsReady = false;
    }

    // ��������������������������������������������������������������������������������������������������������������������������������������������������
    //  Background Attach Loop
    // ��������������������������������������������������������������������������������������������������������������������������������������������������

    private static void AttachLoop()
    {
        while (true)
        {
            try
            {
                if (!IsAttached)
                {
                    IsReady = false;
                    TryAttach();
                }
                else
                {
                    // Heartbeat �� verify the process is still alive
                    if (_vmm is null || !_vmm.PidGetFromName(TargetExe, out uint livePid) || livePid != Pid)
                    {
                        Console.WriteLine("[DMA] Process lost.");
                        Pid  = 0;
                        Base = 0;
                        IsReady = false;
                        OnDetached?.Invoke();
                    }
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine($"[DMA] AttachLoop error: {ex.Message}");
                Pid  = 0;
                Base = 0;
                IsReady = false;
            }

            Thread.Sleep(1000);
        }
    }

    private static void TryAttach()
    {
        if (_vmm is null) return;

        try
        {
            _vmm.ForceFullRefresh();

            if (!_vmm.PidGetFromName(TargetExe, out uint pid) || pid == 0)
            {
                Console.WriteLine($"[DMA] Waiting for {TargetExe}...");
                return;
            }

            ulong baseAddr = _vmm.ProcessGetModuleBase(pid, TargetModule);
            if (baseAddr == 0)
            {
                Console.WriteLine($"[DMA] Found PID={pid} but module base is 0, retrying...");
                return;
            }

            Pid     = pid;
            Base    = baseAddr;
            IsReady = true;

            Console.WriteLine($"[DMA] Attached! PID={pid}  Base=0x{baseAddr:X}");

            // ACE Cache Table validation & dynamic relocation
            ulong tableBase = Base + ABIOffsets.AceCacheTableRva;
            bool tableValid = ValidateAceTable(tableBase);

            if (!tableValid)
            {
                Console.WriteLine("[DMA] ACE cache table invalid - scanning for new location");
                ulong newTable = ScanAceCacheTable();
                if (newTable != 0)
                {
                    ABIOffsets.AceCacheTableRva = newTable - Base;
                    Console.WriteLine($"[DMA] Found ACE table at new RVA: 0x{ABIOffsets.AceCacheTableRva:X}");
                    IsTableOffsetResolved = true;
                }
                else
                {
                    Console.WriteLine("[DMA] Warning: ACE cache table could not be resolved automatically.");
                    IsTableOffsetResolved = false;
                }
            }
            else
            {
                Console.WriteLine($"[DMA] ACE cache table verified at RVA: 0x{ABIOffsets.AceCacheTableRva:X}");
                IsTableOffsetResolved = true;
            }

            ClearAceCache();
            OnAttached?.Invoke();
        }
        catch (Exception ex)
        {
            Console.WriteLine($"[DMA] TryAttach: {ex.Message}");
        }
    }

    // ��������������������������������������������������������������������������������������������������������������������������������������������������
    //  Guards
    // ��������������������������������������������������������������������������������������������������������������������������������������������������

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    private static void EnsureInitialized()
    {
        if (_vmm is null)
            throw new InvalidOperationException("VMM not initialized. Call DmaMemory.Init() first.");
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    private static void EnsureAttached()
    {
        EnsureInitialized();
        if (Pid == 0 || Base == 0)
            throw new InvalidOperationException("Not attached. Waiting for ArenaBreakoutInfinite.exe...");
    }

    // ��������������������������������������������������������������������������������������������������������������������������������������������������
    //  Process / Module Enumeration
    // ��������������������������������������������������������������������������������������������������������������������������������������������������

    public readonly record struct ProcEntry(uint Pid, string Name, bool IsWow64);

    public static List<ProcEntry> GetProcessList()
    {
        EnsureInitialized();
        try
        {
            var infos = _vmm!.ProcessGetInformationAll();
            if (infos is null || infos.Length == 0) return [];

            return infos
                .Select(pi => new ProcEntry(pi.dwPID, pi.sNameLong ?? string.Empty, pi.fWow64))
                .OrderBy(p => p.Name, StringComparer.OrdinalIgnoreCase)
                .ThenBy(p => p.Pid)
                .ToList();
        }
        catch (Exception ex)
        {
            Console.WriteLine($"[DMA] GetProcessList: {ex.Message}");
            return [];
        }
    }

    public sealed class ModuleInfo
    {
        public string Name     { get; init; } = "";
        public string FullName { get; init; } = "";
        public ulong  Base     { get; init; }
        public ulong  Size     { get; init; }
        public bool   IsWow64  { get; init; }
    }

    public static List<ModuleInfo> GetModules(uint? pid = null)
    {
        EnsureInitialized();
        uint p = pid ?? Pid;
        if (p == 0) return [];

        var arr = _vmm!.Map_GetModule(p, fExtendedInfo: false);
        if (arr is null || arr.Length == 0) return [];

        return arr.Select(m => new ModuleInfo
        {
            Name     = string.IsNullOrWhiteSpace(m.sFullName) ? (m.sText ?? "") : Path.GetFileName(m.sFullName),
            FullName = m.sFullName ?? m.sText ?? "",
            Base     = m.vaBase,
            Size     = m.cbImageSize,
            IsWow64  = m.fWow64
        })
        .OrderBy(m => m.Name, StringComparer.OrdinalIgnoreCase)
        .ToList();
    }

    // ��������������������������������������������������������������������������������������������������������������������������������������������������
    //  Read
    // ��������������������������������������������������������������������������������������������������������������������������������������������������

    // ═════════════════════════════════════════════════════════════════════════
    //  Performance & Read Health Metrics
    // ═════════════════════════════════════════════════════════════════════════
    private static long _totalReadCount;
    private static long _failedReadCount;
    private static long _scatterCount;
    private static long _aceHits;
    private static long _aceMisses;
    private static long _lastMemoryLogStamp = System.Diagnostics.Stopwatch.GetTimestamp();

    public static void LogMemoryHealthIfNeeded(double intervalSeconds = 5.0)
    {
        if (!IsAttached) return;
        long now = System.Diagnostics.Stopwatch.GetTimestamp();
        double elapsedSec = (double)(now - _lastMemoryLogStamp) / System.Diagnostics.Stopwatch.Frequency;
        if (elapsedSec < intervalSeconds) return;
        _lastMemoryLogStamp = now;

        long reads = Interlocked.Exchange(ref _totalReadCount, 0);
        long fails = Interlocked.Exchange(ref _failedReadCount, 0);
        long scatters = Interlocked.Exchange(ref _scatterCount, 0);
        long aceH = Interlocked.Exchange(ref _aceHits, 0);
        long aceM = Interlocked.Exchange(ref _aceMisses, 0);

        double readsPerSec = reads / elapsedSec;
        double scattersPerSec = scatters / elapsedSec;
        double failRate = (reads + fails) > 0 ? (fails * 100.0) / (reads + fails) : 0.0;
        long aceTotal = aceH + aceM;
        double aceHitPct = aceTotal > 0 ? (aceH * 100.0) / aceTotal : 100.0;

        Logger.Info($"[DMA-Mem] Rate: {readsPerSec:F0} r/s | {scattersPerSec:F0} scatters/s | Fails: {fails} ({failRate:F2}%) | ACE Cache: {aceHitPct:F1}% ({aceH}/{aceTotal})");
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static T Read<T>(ulong address) where T : unmanaged
    {
        EnsureAttached();
        Interlocked.Increment(ref _totalReadCount);
        if (!_vmm!.MemReadValue(Pid, address, out T v))
            Interlocked.Increment(ref _failedReadCount);
        return v;
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static bool TryRead<T>(ulong address, out T value) where T : unmanaged
    {
        if (!IsAttached) { value = default; return false; }
        Interlocked.Increment(ref _totalReadCount);
        bool ok = _vmm!.MemReadValue(Pid, address, out value);
        if (!ok) Interlocked.Increment(ref _failedReadCount);
        return ok;
    }

    public static bool ReadSpan(ulong address, Span<byte> dst, VFlags flags = VFlags.NONE)
    {
        EnsureAttached();
        if (dst.Length == 0) return true;
        unsafe
        {
            fixed (byte* p = dst)
                return _vmm!.MemRead(Pid, address, (nint)p, (uint)dst.Length, out var read, flags)
                    && read == (uint)dst.Length;
        }
    }

    public static byte[]? ReadBytes(ulong address, uint size, VFlags flags = VFlags.NONE)
    {
        EnsureAttached();
        if (size == 0) return [];
        var buf = new byte[size];
        unsafe
        {
            fixed (byte* p = buf)
            {
                if (!_vmm!.MemRead(Pid, address, (nint)p, size, out var read, flags) || read == 0)
                    return null;
                if (read < size) Array.Resize(ref buf, (int)read);
            }
        }
        return buf;
    }

    public static T[]? ReadArray<T>(ulong address, int count) where T : unmanaged
    {
        EnsureAttached();
        return _vmm!.MemReadArray<T>(Pid, address, count)?.ToArray();
    }

    public static ulong FindSignature(string signature, ulong addrMin = 0, ulong addrMax = ulong.MaxValue)
    {
        EnsureAttached();
        return _vmm!.FindSignature(Pid, signature, addrMin, addrMax);
    }

    // ��������������������������������������������������������������������������������������������������������������������������������������������������
    //  Pointer helpers
    // ��������������������������������������������������������������������������������������������������������������������������������������������������

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static ulong ReadPtr(ulong address) => Read<ulong>(address);

    public static ulong ReadPtrChain(ulong baseAddr, params uint[] offsets)
    {
        ulong ptr = baseAddr;
        foreach (uint off in offsets)
            ptr = ReadPtr(checked(ptr + off));
        return ptr;
    }

    // ��������������������������������������������������������������������������������������������������������������������������������������������������
    //  String helpers
    // ��������������������������������������������������������������������������������������������������������������������������������������������������

    public static string ReadAsciiZ(ulong address, int max = 256, VFlags flags = VFlags.NONE)
    {
        var bytes = ReadBytes(address, (uint)max, flags);
        if (bytes is null || bytes.Length == 0) return "";
        int zero = Array.IndexOf(bytes, (byte)0);
        return Encoding.ASCII.GetString(bytes, 0, zero >= 0 ? zero : bytes.Length);
    }

    public static string ReadUtf16Z(ulong address, int maxChars = 256, VFlags flags = VFlags.NONE)
    {
        var bytes = ReadBytes(address, (uint)(maxChars * 2), flags);
        if (bytes is null || bytes.Length < 2) return "";
        int end = -1;
        for (int i = 0; i + 1 < bytes.Length; i += 2)
            if (bytes[i] == 0 && bytes[i + 1] == 0) { end = i; break; }
        if (end < 0) end = bytes.Length - (bytes.Length % 2);
        return Encoding.Unicode.GetString(bytes, 0, end);
    }

    public static string? ReadString(ulong address, int bytes, Encoding enc)
    {
        EnsureAttached();
        return _vmm!.MemReadString(Pid, address, bytes, enc);
    }

    /// <summary>Read a Unity managed string (UTF-16, chars at +0x14).</summary>
    public static string ReadUnityString(ulong address, int maxChars = 128)
        => ReadUtf16Z(address + 0x14, maxChars);

    /// <summary>Read an Unreal Engine FString.</summary>
    public static string ReadFString(ulong address, int maxChars = 256)
    {
        ulong dataPtr = Read<ulong>(address);
        int count = Read<int>(address + 0x8);
        if (dataPtr == 0 || count <= 0 || count > 2048) return "";
        return ReadUtf16Z(dataPtr, Math.Min(count, maxChars));
    }

    // ��������������������������������������������������������������������������������������������������������������������������������������������������
    //  Write
    // ��������������������������������������������������������������������������������������������������������������������������������������������������

    // ─────────────────────────────────────────────────────────────────────────
    //  Scatter factory
    //  Returns a ready-to-use VmmScatter for the attached game process.
    //  Caller owns the lifetime �? always use inside a `using` block.
    // ─────────────────────────────────────────────────────────────────────────

    /// <summary>
    /// Create a <see cref="VmmScatter"/> bound to the currently-attached game PID.
    /// Use inside a <c>using</c> block.
    /// <code>
    ///   using var sc = DmaMemory.CreateScatter();
    ///   sc.PrepareReadValue&lt;ulong&gt;(addr);
    ///   sc.Execute();
    ///   sc.ReadValue&lt;ulong&gt;(addr, out var val);
    /// </code>
    /// </summary>
    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static VmmScatter CreateScatter(VFlags flags = VFlags.NONE)
    {
        EnsureAttached();
        Interlocked.Increment(ref _scatterCount);
        return new VmmScatter(_vmm!, Pid, flags);
    }

    /// <summary>
    /// Create a <see cref="VmmScatter"/> with the VMMDLL_FLAG_NOCACHE flag set,
    /// guaranteeing fresh reads (use sparingly �? bypasses DMA cache).
    /// </summary>
    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static VmmScatter CreateScatterNoCache()
        => CreateScatter(VFlags.NOCACHE);

    // ─────────────────────────────────────────────────────────────────────────
    //  Write
    // ─────────────────────────────────────────────────────────────────────────

    public static bool Write<T>(ulong address, in T value) where T : unmanaged
    {
        EnsureAttached();
        return _vmm!.MemWriteValue(Pid, address, value);
    }

    public static bool WriteBytes(ulong address, byte[] data)
    {
        EnsureAttached();
        return _vmm!.MemWriteSpan(Pid, address, data.AsSpan());
    }

    #region ACE Decryption

    private static uint AceMurmur(uint x)
    {
        unchecked
        {
            return 73244475U * (x ^ (x >> 16));
        }
    }

    private static uint AceMask(uint v12, uint seed, uint v16, uint v17)
    {
        unchecked
        {
            uint sa = AceMurmur(seed ^ v12 ^ (v17 + 626627285U));
            uint sb = AceMurmur(seed ^ v12 ^ (v17 - 1013904242U));
            uint sc = AceMurmur(seed ^ v12 ^ v16);
            uint w = seed ^ v12 ^ v17;
            w ^= (w >> 16);
            uint sd = (73244475U * w) ^ (2671443968U * w);
            return ((sa ^ (sa >> 16)) & 0xFF)
                 | (((sb << 8) ^ (sb >> 8)) & 0xFF00)
                 | ((sc ^ (sc << 16)) & 0xFF0000)
                 | ((sd << 8) & 0xFF000000);
        }
    }

    [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Sequential, Pack = 1)]
    public struct AceDword3
    {
        public uint D0;
        public uint D1;
        public uint D2;
    }

    [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Sequential, Pack = 1)]
    public struct AceDword12
    {
        public uint D0, D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11;
    }

    public struct AceNodeInfo
    {
        public ulong NodePtr;
        public ulong DataPtr;
        public uint  DataSize;
        public uint  Seed;
        public uint  Key;
    }

    private static readonly System.Collections.Concurrent.ConcurrentDictionary<uint, AceNodeInfo> _aceCache = new();

    public static void ClearAceCache() => _aceCache.Clear();

    public static bool ValidateAceTable(ulong tableBase)
    {
        if (tableBase == 0) return false;

        // Sample buckets across the 65,537 hash table.
        // Testing 512 distributed buckets (step = 128)
        for (uint bucket = 0; bucket < 0x10001U; bucket += 128)
        {
            ulong entry = Read<ulong>(tableBase + (ulong)bucket * 8);
            if (entry > 0x1000000 && entry < 0x7FFFFFFFFFFF)
            {
                // Verify AceNode structure:
                // +0x10: DataPtr (heap pointer)
                // +0x18: DataSize (12 to 1024)
                // +0x1C: Key (non-zero, fits 25-bit mask)
                ulong dataPtr = Read<ulong>(entry + 0x10);
                uint dataSize = Read<uint>(entry + 0x18);
                uint key = Read<uint>(entry + 0x1C);

                if (dataPtr > 0x1000000 && dataPtr < 0x7FFFFFFFFFFF &&
                    dataSize >= 12 && dataSize <= 1024 &&
                    key > 0 && key < 0x2000000)
                {
                    return true;
                }
            }
        }
        return false;
    }

    public static ulong ScanAceCacheTable()
    {
        if (Base == 0) return 0;

        // 1. Check known candidate RVAs first
        ulong[] knownCandidates = [0xB5E4D70, 0xB5E4000, 0xB5E5000];
        foreach (var rva in knownCandidates)
        {
            ulong candidate = Base + rva;
            if (ValidateAceTable(candidate))
                return candidate;
        }

        // 2. Search near the existing/known AceCacheTableRva (within +/- 32MB) in 0x1000 page steps
        ulong centerRva = ABIOffsets.AceCacheTableRva != 0 ? ABIOffsets.AceCacheTableRva : 0xB5E4D70;
        ulong searchRadius = 0x2000000;
        ulong startRva = centerRva > searchRadius ? centerRva - searchRadius : 0x1000000;
        ulong endRva = centerRva + searchRadius;

        for (ulong rva = startRva; rva < endRva; rva += 0x1000)
        {
            ulong candidate = Base + rva;
            if (ValidateAceTable(candidate))
                return candidate;
        }

        // 3. Broader scan across entire data section (0x1000000 to 0x20000000) in 0x10000 steps
        for (ulong rva = 0x1000000; rva < 0x20000000; rva += 0x10000)
        {
            ulong candidate = Base + rva;
            if (ValidateAceTable(candidate))
                return candidate;
        }

        return 0;
    }

    public static bool EnsureAceTableValid()
    {
        if (!IsAttached || Base == 0) return false;
        ulong tableBase = Base + ABIOffsets.AceCacheTableRva;
        if (ValidateAceTable(tableBase)) return true;

        ulong newTable = ScanAceCacheTable();
        if (newTable != 0)
        {
            ABIOffsets.AceCacheTableRva = newTable - Base;
            ClearAceCache();
            IsTableOffsetResolved = true;
            return true;
        }

        if (ABIOffsets.AceCacheTableRva == 0)
        {
            ABIOffsets.AceCacheTableRva = 0xB5E4D70;
        }

        IsTableOffsetResolved = false;
        return false;
    }

    private static int  _consecutiveAceMisses;
    private static long _lastAceValidateStamp;

    public static bool TryGetAceNode(uint key, out AceNodeInfo node)
    {
        if (_aceCache.TryGetValue(key, out node))
        {
            if (node.DataPtr > 0x1000000)
            {
                Interlocked.Increment(ref _aceHits);
                return true;
            }
        }

        if (key == 0 || Base == 0) { node = default; return false; }

        unchecked
        {
            uint bucket32 = (uint)(((ulong)key * 0x9E3779B1UL) % 0x10001U);
            ulong entry = Read<ulong>(Base + ABIOffsets.AceCacheTableRva + (ulong)bucket32 * 8);
            int limit = 0;
            while (entry != 0 && limit < 40)
            {
                uint entryKey = Read<uint>(entry + 0x1C) & 0x1FFFFFF;
                if (entryKey == key)
                {
                    node = new AceNodeInfo
                    {
                        NodePtr  = entry,
                        DataPtr  = Read<ulong>(entry + 0x10),
                        DataSize = Read<uint>(entry + 0x18),
                        Seed     = Read<uint>(entry + 0x20),
                        Key      = key
                    };
                    if (node.DataPtr > 0x1000000)
                    {
                        _aceCache[key] = node;
                        _consecutiveAceMisses = 0;
                        Interlocked.Increment(ref _aceHits);
                        return true;
                    }
                    break;
                }
                entry = Read<ulong>(entry + 0x28);
                limit++;
            }

            uint bucket64 = (uint)(((ulong)key * 0x9E3779B1UL) % 0x10001U);
            if (bucket64 != bucket32)
            {
                ulong entry64 = Read<ulong>(Base + ABIOffsets.AceCacheTableRva + (ulong)bucket64 * 8);
                int limit64 = 0;
                while (entry64 != 0 && limit64 < 40)
                {
                    uint entryKey = Read<uint>(entry64 + 0x1C) & 0x1FFFFFF;
                    if (entryKey == key)
                    {
                        node = new AceNodeInfo
                        {
                            NodePtr  = entry64,
                            DataPtr  = Read<ulong>(entry64 + 0x10),
                            DataSize = Read<uint>(entry64 + 0x18),
                            Seed     = Read<uint>(entry64 + 0x20),
                            Key      = key
                        };
                        if (node.DataPtr > 0x1000000)
                        {
                            _aceCache[key] = node;
                            _consecutiveAceMisses = 0;
                            Interlocked.Increment(ref _aceHits);
                            return true;
                        }
                        break;
                    }
                    entry64 = Read<ulong>(entry64 + 0x28);
                    limit64++;
                }
            }
        }

        Interlocked.Increment(ref _aceMisses);
        int misses = Interlocked.Increment(ref _consecutiveAceMisses);

        if (misses >= 1)
        {
            ulong tableBase = Base + ABIOffsets.AceCacheTableRva;
            if (!ValidateAceTable(tableBase))
            {
                Logger.Warn($"[DMA] ACE cache table invalid - rescanning");
                ulong newTable = ScanAceCacheTable();
                if (newTable != 0)
                {
                    ABIOffsets.AceCacheTableRva = newTable - Base;
                    ClearAceCache();
                    Logger.Info($"[DMA] Found ACE table at new RVA: 0x{ABIOffsets.AceCacheTableRva:X}");
                    _consecutiveAceMisses = 0;
                    return TryGetAceNode(key, out node);
                }
            }
        }

        node = default;
        return false;
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static Vector3 DecryptAceRelative(AceDword3 raw, uint key, uint seed)
    {
        unchecked
        {
            uint d0 = raw.D0;
            uint d1 = raw.D1;
            uint d2 = raw.D2;

            uint v12 = 0x9E3779B1U * key;
            uint v16 = 0x3C6EF372U;
            uint v17 = 0xDAA66D2BU;

            d0 ^= AceMask(v12, seed, v16, v17);
            v16 += 0x78DDE6E4U; v17 += 0x78DDE6E4U;
            d1 ^= AceMask(v12, seed, v16, v17);
            v16 += 0x78DDE6E4U; v17 += 0x78DDE6E4U;
            d2 ^= AceMask(v12, seed, v16, v17);

            return new Vector3(
                BitConverter.UInt32BitsToSingle(d0),
                BitConverter.UInt32BitsToSingle(d1),
                BitConverter.UInt32BitsToSingle(d2)
            );
        }
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static Vector3 DecryptAceC2W(AceDword3 raw, uint key, uint seed)
    {
        unchecked
        {
            uint d4 = raw.D0;
            uint d5 = raw.D1;
            uint d6 = raw.D2;

            uint v12 = 0x9E3779B1U * key;
            uint v16 = 0x3C6EF372U + 4U * 0x78DDE6E4U;
            uint v17 = 0xDAA66D2BU + 4U * 0x78DDE6E4U;

            d4 ^= AceMask(v12, seed, v16, v17);
            v16 += 0x78DDE6E4U; v17 += 0x78DDE6E4U;
            d5 ^= AceMask(v12, seed, v16, v17);
            v16 += 0x78DDE6E4U; v17 += 0x78DDE6E4U;
            d6 ^= AceMask(v12, seed, v16, v17);

            return new Vector3(
                BitConverter.UInt32BitsToSingle(d4),
                BitConverter.UInt32BitsToSingle(d5),
                BitConverter.UInt32BitsToSingle(d6)
            );
        }
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static Vector3 DecryptAceC2W(AceDword12 raw, uint key, uint seed)
    {
        return DecryptAceC2W(new AceDword3 { D0 = raw.D4, D1 = raw.D5, D2 = raw.D6 }, key, seed);
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static FTransform DecryptAceFTransform(AceDword12 raw, uint key, uint seed)
    {
        unchecked
        {
            uint v12 = 0x9E3779B1U * key;
            uint v16 = 0x3C6EF372U;
            uint v17 = 0xDAA66D2BU;

            uint d0 = raw.D0 ^ AceMask(v12, seed, v16, v17); v16 += 0x78DDE6E4U; v17 += 0x78DDE6E4U;
            uint d1 = raw.D1 ^ AceMask(v12, seed, v16, v17); v16 += 0x78DDE6E4U; v17 += 0x78DDE6E4U;
            uint d2 = raw.D2 ^ AceMask(v12, seed, v16, v17); v16 += 0x78DDE6E4U; v17 += 0x78DDE6E4U;
            uint d3 = raw.D3 ^ AceMask(v12, seed, v16, v17); v16 += 0x78DDE6E4U; v17 += 0x78DDE6E4U;
            uint d4 = raw.D4 ^ AceMask(v12, seed, v16, v17); v16 += 0x78DDE6E4U; v17 += 0x78DDE6E4U;
            uint d5 = raw.D5 ^ AceMask(v12, seed, v16, v17); v16 += 0x78DDE6E4U; v17 += 0x78DDE6E4U;
            uint d6 = raw.D6 ^ AceMask(v12, seed, v16, v17); v16 += 0x78DDE6E4U; v17 += 0x78DDE6E4U;
            uint d7 = raw.D7 ^ AceMask(v12, seed, v16, v17); v16 += 0x78DDE6E4U; v17 += 0x78DDE6E4U;
            uint d8 = raw.D8 ^ AceMask(v12, seed, v16, v17); v16 += 0x78DDE6E4U; v17 += 0x78DDE6E4U;
            uint d9 = raw.D9 ^ AceMask(v12, seed, v16, v17); v16 += 0x78DDE6E4U; v17 += 0x78DDE6E4U;
            uint d10 = raw.D10 ^ AceMask(v12, seed, v16, v17); v16 += 0x78DDE6E4U; v17 += 0x78DDE6E4U;
            uint d11 = raw.D11 ^ AceMask(v12, seed, v16, v17);

            FTransform transform = new FTransform();
            transform.Rotation = new FQuat {
                X = BitConverter.UInt32BitsToSingle(d0),
                Y = BitConverter.UInt32BitsToSingle(d1),
                Z = BitConverter.UInt32BitsToSingle(d2),
                W = BitConverter.UInt32BitsToSingle(d3)
            };
            transform.Translation = new Vector3(
                BitConverter.UInt32BitsToSingle(d4),
                BitConverter.UInt32BitsToSingle(d5),
                BitConverter.UInt32BitsToSingle(d6)
            );
            transform.Scale3D = new Vector3(
                BitConverter.UInt32BitsToSingle(d8),
                BitConverter.UInt32BitsToSingle(d9),
                BitConverter.UInt32BitsToSingle(d10)
            );
            return transform;
        }
    }

    public static Vector3 DecryptRelativeLocation(ulong component)
    {
        if (component == 0) return default;

        unchecked
        {
            uint firstDword = Read<uint>(component + 0x170);
            if (firstDword == 0xFF8B6D2B)
                return default;

            uint ctl = Read<uint>(component + 0x17C);
            uint algo = ctl >> 29;
            uint key = ctl & 0x1FFFFFF;

            if (algo == 0 || key == 0)
                return Read<Vector3>(component + 0x170);

            if (!TryGetAceNode(key, out var node) || node.DataSize < 12 || node.DataPtr < 0x1000000 || node.NodePtr < 0x1000000)
                return default;

            uint seed = Read<uint>(node.NodePtr + 0x20);
            var raw = Read<AceDword3>(node.DataPtr);
            if (raw.D0 == 0xFF8B6D2B) return default;
            return DecryptAceRelative(raw, key, seed);
        }
    }

    public static Vector3 DecryptC2WTranslation(ulong component)
    {
        if (component == 0) return default;

        unchecked
        {
            uint firstDword = Read<uint>(component + 0x220);
            if (firstDword == 0xFF8B6D2B)
                return default;

            uint ctl = Read<uint>(component + 0x250);
            uint algo = ctl >> 29;
            uint key = ctl & 0x1FFFFFF;

            if (algo == 0 || key == 0)
                return Read<Vector3>(component + 0x220);

            if (!TryGetAceNode(key, out var node) || node.DataSize < 48 || node.DataPtr < 0x1000000 || node.NodePtr < 0x1000000)
                return default;

            uint seed = Read<uint>(node.NodePtr + 0x20);
            var raw = Read<AceDword12>(node.DataPtr);
            if (raw.D0 == 0xFF8B6D2B || raw.D4 == 0xFF8B6D2B) return default;
            var transform = DecryptAceFTransform(raw, key, seed);
            return transform.Translation;
        }
    }

    public static FTransform DecryptFTransform(ulong component)
    {
        if (component == 0) return default;

        unchecked
        {
            uint firstDword = Read<uint>(component + 0x220);
            if (firstDword == 0xFF8B6D2B)
                return default;

            uint ctl = Read<uint>(component + 0x250);
            uint algo = ctl >> 29;
            uint key = ctl & 0x1FFFFFF;

            if (algo == 0 || key == 0)
                return Read<FTransform>(component + 0x220);

            if (!TryGetAceNode(key, out var node) || node.DataSize < 12 || node.DataPtr < 0x1000000 || node.NodePtr < 0x1000000)
                return default;

            uint seed = Read<uint>(node.NodePtr + 0x20);

            if (node.DataSize >= 48)
            {
                var raw = Read<AceDword12>(node.DataPtr);
                if (raw.D0 == 0xFF8B6D2B || raw.D4 == 0xFF8B6D2B)
                {
                    var rawTrans = Read<AceDword3>(node.DataPtr + 16);
                    if (rawTrans.D0 == 0xFF8B6D2B) return default;
                    FTransform transform = new FTransform();
                    transform.Translation = DecryptAceC2W(rawTrans, key, seed);
                    return transform;
                }
                return DecryptAceFTransform(raw, key, seed);
            }
            else
            {
                var rawTrans = Read<AceDword3>(node.DataPtr + 16);
                if (rawTrans.D0 == 0xFF8B6D2B) return default;
                FTransform transform = new FTransform();
                transform.Translation = DecryptAceC2W(rawTrans, key, seed);
                return transform;
            }
        }
    }

    [MethodImpl(MethodImplOptions.AggressiveInlining)]
    public static bool IsValidCoordinate(Vector3 v)
    {
        if (!float.IsFinite(v.X) || !float.IsFinite(v.Y) || !float.IsFinite(v.Z)) return false;
        if (MathF.Abs(v.X) > 10000000f || MathF.Abs(v.Y) > 10000000f || MathF.Abs(v.Z) > 10000000f) return false;
        if (v.LengthSquared() < 100f) return false;

        float len2DSq = v.X * v.X + v.Y * v.Y;
        if (len2DSq > 1000000f && MathF.Abs(v.Z) < 0.05f) return false;
        if (MathF.Abs(v.Z) > 500f && (MathF.Abs(v.X) < 0.05f || MathF.Abs(v.Y) < 0.05f)) return false;

        return true;
    }


    public static Vector3 DecryptActorPosition(ulong root)
    {
        if (root < 0x100000) return default;

        // If attached to a parent actor, ComponentToWorld is required for world space
        ulong attachParent = Read<ulong>(root + 0x108);
        if (attachParent > 0x100000)
        {
            Vector3 c2wAttached = DecryptC2WTranslation(root);
            if (IsValidCoordinate(c2wAttached))
                return c2wAttached;
        }

        Vector3 rel = DecryptRelativeLocation(root);
        if (IsValidCoordinate(rel))
            return rel;

        Vector3 c2w = DecryptC2WTranslation(root);
        if (IsValidCoordinate(c2w))
            return c2w;

        return default;
    }

    #endregion

    public sealed class VmmSharpExAdapter : IVmmEx
    {
        private readonly Vmm _vmm;
        public VmmSharpExAdapter(Vmm vmm) => _vmm = vmm ?? throw new ArgumentNullException(nameof(vmm));

        #region Registry

        public string RegReadString(string path)
        {
            var bytes = _vmm.WinReg_QueryValue(path, out uint type);
            if (bytes == null || bytes.Length == 0) return string.Empty;

            if (type == 1 || type == 2) // REG_SZ / REG_EXPAND_SZ
                return Encoding.Unicode.GetString(bytes).TrimEnd('\0');

            if (type == 7 || type == 3) // REG_MULTI_SZ / REG_BINARY (lenient)
                return Encoding.Unicode.GetString(bytes).TrimEnd('\0');

            return string.Empty;
        }

        public uint RegReadDword(string path)
        {
            var bytes = _vmm.WinReg_QueryValue(path, out uint type);
            if (bytes == null || bytes.Length == 0) return 0;

            if (type == 4 && bytes.Length >= 4) // REG_DWORD
                return BinaryPrimitives.ReadUInt32LittleEndian(bytes.AsSpan(0, 4));

            if (type == 1 || type == 2)
            {
                var s = Encoding.Unicode.GetString(bytes).TrimEnd('\0');
                return uint.TryParse(s, out var v) ? v : 0;
            }
            return 0;
        }

        #endregion

        #region Process / Module Info

        public uint GetPidByName(string name)
            => _vmm.PidGetFromName(name, out var pid) && pid != 0 ? pid : 0;

        public uint[] GetPidsByName(string name)
        {
            var pids = _vmm.PidGetList();
            if (pids == null || pids.Length == 0) return Array.Empty<uint>();

            var mod1 = name;
            var mod2 = name.EndsWith(".exe", StringComparison.OrdinalIgnoreCase) ? name[..^4] : (name + ".exe");

            return pids.Where(pid =>
            {
                var b1 = _vmm.ProcessGetModuleBase(pid, mod1);
                if (b1 != 0) return true;
                var b2 = _vmm.ProcessGetModuleBase(pid, mod2);
                return b2 != 0;
            }).ToArray();
        }

        public bool GetModuleInfo(uint pid, string moduleName, out ulong baseAddress, out ulong imageSize)
        {
            baseAddress = _vmm.ProcessGetModuleBase(pid, moduleName);
            if (baseAddress == 0) { imageSize = 0; return false; }

            Span<byte> hdr = stackalloc byte[0x1000];
            unsafe
            {
                fixed (byte* p = hdr)
                {
                    if (!_vmm.MemRead(pid, baseAddress, (nint)p, (uint)hdr.Length, out var read, VFlags.NOCACHE) || read < 0x400)
                    {
                        imageSize = GuessSize(moduleName);
                        return true;
                    }
                }
            }

            if (hdr[0] != (byte)'M' || hdr[1] != (byte)'Z')
            {
                imageSize = GuessSize(moduleName);
                return true;
            }

            int e_lfanew = BinaryPrimitives.ReadInt32LittleEndian(hdr.Slice(0x3C, 4));
            if (e_lfanew <= 0 || e_lfanew + 0x100 > hdr.Length) { imageSize = GuessSize(moduleName); return true; }

            if (hdr[e_lfanew] != (byte)'P' || hdr[e_lfanew + 1] != (byte)'E')
            { imageSize = GuessSize(moduleName); return true; }

            int optOff = e_lfanew + 24;
            if (optOff + 0x38 + 4 > hdr.Length) { imageSize = GuessSize(moduleName); return true; }

            uint sz = BinaryPrimitives.ReadUInt32LittleEndian(hdr.Slice(optOff + 0x38, 4));
            imageSize = sz != 0 ? sz : GuessSize(moduleName);
            return true;
        }

        private static ulong GuessSize(string module)
            => module.Contains("win32k", StringComparison.OrdinalIgnoreCase) ? 0x800000UL : 0x400000UL;

        #endregion

        #region Memory / Scan / Symbols

        public unsafe bool MemRead(uint pid, ulong va, nint pb, uint cb, out uint cbRead, VmmFlags flags)
            => _vmm.MemRead(pid, va, pb, cb, out cbRead, (VFlags)flags);

        public ulong FindSignature(uint pid, ulong start, ulong end, string idaStylePattern)
        {
            if (end <= start) return 0;

            var (needle, mask) = ParsePattern(idaStylePattern);
            if (needle.Length == 0) return 0;

            const int chunk = 256 * 1024;
            int overlap = Math.Max(needle.Length - 1, 0);

            byte[] buf = new byte[chunk + overlap];

            ulong cur = start;
            int valid = 0;

            while (cur < end)
            {
                int toRead = (int)Math.Min((ulong)chunk, end - cur);
                unsafe
                {
                    fixed (byte* p = buf)
                    {
                        if (!_vmm.MemRead(pid, cur, (nint)p, (uint)toRead, out var read, VFlags.NOCACHE | VFlags.NO_PREDICTIVE_READ))
                            return 0;
                        valid = (int)read;
                    }
                }
                if (valid <= 0) return 0;

                int limit = valid - needle.Length + 1;
                for (int i = 0; i < limit; i++)
                {
                    if (Match(buf, i, needle, mask))
                        return cur + (uint)i;
                }

                cur += (uint)limit;
                if (cur >= end) break;

                Buffer.BlockCopy(buf, valid - overlap, buf, 0, overlap);
            }

            return 0;
        }

        private static (byte[] bytes, bool[] mask) ParsePattern(string pattern)
        {
            var parts = pattern.Split(new[] { ' ', '\t' }, StringSplitOptions.RemoveEmptyEntries);
            var bytes = new List<byte>(parts.Length);
            var mask = new List<bool>(parts.Length);

            foreach (var p in parts)
            {
                if (p == "?" || p == "??") { bytes.Add(0); mask.Add(false); continue; }
                if (byte.TryParse(p, NumberStyles.HexNumber, CultureInfo.InvariantCulture, out var b))
                { bytes.Add(b); mask.Add(true); }
            }
            return (bytes.ToArray(), mask.ToArray());
        }

        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        private static bool Match(byte[] hay, int offset, byte[] needle, bool[] mask)
        {
            for (int i = 0; i < needle.Length; i++)
                if (mask[i] && hay[offset + i] != needle[i]) return false;
            return true;
        }

        public ulong GetExportVA(uint pid, string moduleName, string function)
        {
            var kernelPid = pid | IVmmEx.PID_PROCESS_WITH_KERNELMEMORY;
            var entries = _vmm.Map_GetEAT(kernelPid, moduleName, out var eatInfo);
            if (entries == null || entries.Length == 0 || !eatInfo.fValid)
                return 0;

            foreach (var e in entries)
            {
                if (string.Equals(e.sFunction, function, StringComparison.Ordinal))
                    return e.vaFunction;
            }
            return 0;
        }

        public bool PdbSymbolAddress(uint pid, string moduleName, string symbol, out ulong va)
        {
            _ = _vmm.ProcessGetModuleBase(pid, moduleName);
            var ok = _vmm.PdbSymbolAddress(moduleName, symbol, out va);
            return ok && va != 0;
        }

        #endregion
    }    
}