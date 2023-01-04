#include "device8.h"

FakeDirect3D8::FakeDirect3D8(IDirect3D8* pOriginal) :
	m_pIDirect3D8(pOriginal)
{
}

FakeDirect3D8::~FakeDirect3D8(void)
{
}

HRESULT FakeDirect3D8::QueryInterface(REFIID riid, void** ppvObj)
{
	*ppvObj = NULL;
	HRESULT hRes = m_pIDirect3D8->QueryInterface(riid, ppvObj);
	if (SUCCEEDED(hRes))
		*ppvObj = this;

	return hRes;
}

ULONG FakeDirect3D8::AddRef(void)
{
	return(m_pIDirect3D8->AddRef());
}

ULONG FakeDirect3D8::Release(void)
{
	ULONG count = m_pIDirect3D8->Release();
	delete(this);

	return(count);
}

HRESULT FakeDirect3D8::RegisterSoftwareDevice(void* pInitializeFunction)
{
	return(m_pIDirect3D8->RegisterSoftwareDevice(pInitializeFunction));
}

UINT FakeDirect3D8::GetAdapterCount(void)
{
	return(m_pIDirect3D8->GetAdapterCount());
}

HRESULT FakeDirect3D8::GetAdapterIdentifier(UINT Adapter, DWORD Flags, D3DADAPTER_IDENTIFIER8* pIdentifier)
{
	return(m_pIDirect3D8->GetAdapterIdentifier(Adapter, Flags, pIdentifier));
}

UINT FakeDirect3D8::GetAdapterModeCount(UINT Adapter) {
	return(m_pIDirect3D8->GetAdapterModeCount(Adapter));

}

HRESULT FakeDirect3D8::EnumAdapterModes(UINT Adapter, UINT Mode, D3DDISPLAYMODE* pMode)
{
	return(m_pIDirect3D8->EnumAdapterModes(Adapter, Mode, pMode));
}

HRESULT FakeDirect3D8::GetAdapterDisplayMode(UINT Adapter, D3DDISPLAYMODE* pMode)
{
	return(m_pIDirect3D8->GetAdapterDisplayMode(Adapter, pMode));
}

HRESULT FakeDirect3D8::CheckDeviceType(UINT iAdapter, D3DDEVTYPE DevType, D3DFORMAT DisplayFormat, D3DFORMAT BackBufferFormat, BOOL bWindowed)
{
	return(m_pIDirect3D8->CheckDeviceType(iAdapter, DevType, DisplayFormat, BackBufferFormat, bWindowed));
}

HRESULT FakeDirect3D8::CheckDeviceFormat(UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT AdapterFormat, DWORD Usage, D3DRESOURCETYPE RType, D3DFORMAT CheckFormat)
{
	return(m_pIDirect3D8->CheckDeviceFormat(Adapter, DeviceType, AdapterFormat, Usage, RType, CheckFormat));
}

HRESULT FakeDirect3D8::CheckDeviceMultiSampleType(UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT SurfaceFormat, BOOL Windowed, D3DMULTISAMPLE_TYPE MultiSampleType)
{
	return(m_pIDirect3D8->CheckDeviceMultiSampleType(Adapter, DeviceType, SurfaceFormat, Windowed, MultiSampleType));
}

HRESULT FakeDirect3D8::CheckDepthStencilMatch(UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT AdapterFormat, D3DFORMAT RenderTargetFormat, D3DFORMAT DepthStencilFormat)
{
	return(m_pIDirect3D8->CheckDepthStencilMatch(Adapter, DeviceType, AdapterFormat, RenderTargetFormat, DepthStencilFormat));
}
HRESULT FakeDirect3D8::GetDeviceCaps(UINT Adapter, D3DDEVTYPE DeviceType, D3DCAPS8* pCaps)
{
	return(m_pIDirect3D8->GetDeviceCaps(Adapter, DeviceType, pCaps));
}

HMONITOR FakeDirect3D8::GetAdapterMonitor(UINT Adapter)
{
	return(m_pIDirect3D8->GetAdapterMonitor(Adapter));
}

HRESULT FakeDirect3D8::CreateDevice(UINT Adapter, D3DDEVTYPE DeviceType, HWND hFocusWindow, DWORD BehaviorFlags, D3DPRESENT_PARAMETERS* pPresentationParameters, IDirect3DDevice8** ppReturnedDeviceInterface)
{
	HRESULT hres = m_pIDirect3D8->CreateDevice(Adapter, DeviceType, hFocusWindow, BehaviorFlags, pPresentationParameters, ppReturnedDeviceInterface);
	*ppReturnedDeviceInterface = new FakeDirect3DDevice8(*ppReturnedDeviceInterface);

	return(hres);
}
