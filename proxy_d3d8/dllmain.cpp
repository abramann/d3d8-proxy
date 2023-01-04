#include "d3d8.h" 
#include <Windows.h>

#pragma comment(lib,"d3d8.lib")
#pragma comment(lib,"d3dx8.lib")

FARPROC d3c8;

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {
        HMODULE d3 = LoadLibraryA("C:\\Windows\\SysWow64\\d3d8.dll");
        d3c8 = GetProcAddress(d3, "Direct3DCreate8");
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }

    return TRUE;
}

extern "C" IDirect3D8 * WINAPI Fake_Direct3DCreate8(UINT SDKVersion)
{
    typedef IDirect3D8* (WINAPI* DIRECT3DCREATEPROC)(UINT SDKVersion);
    DIRECT3DCREATEPROC Direct3DCreate8Proc = (DIRECT3DCREATEPROC)d3c8;;
    IDirect3D8* pRealDirect3D8 = Direct3DCreate8Proc(SDKVersion);

    return new FakeDirect3D8(pRealDirect3D8);
}



