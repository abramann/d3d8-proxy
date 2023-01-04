#include "device8.h"

HRESULT FakeDirect3DDevice8::BeginScene(void)
{
	return(m_pIDirect3DDevice8->BeginScene());
}

HRESULT FakeDirect3DDevice8::EndScene(void)
{
	return(m_pIDirect3DDevice8->EndScene());
}


FakeDirect3DDevice8::FakeDirect3DDevice8(IDirect3DDevice8* pOriginal) :
	m_pIDirect3DDevice8(pOriginal)
{
}

FakeDirect3DDevice8::~FakeDirect3DDevice8(void)
{
}

HRESULT FakeDirect3DDevice8::QueryInterface(REFIID riid, void** ppvObj)
{
	return m_pIDirect3DDevice8->QueryInterface(riid, ppvObj);;
}

ULONG FakeDirect3DDevice8::AddRef(void)
{
	return(m_pIDirect3DDevice8->AddRef());
}

ULONG FakeDirect3DDevice8::Release(void)
{
	ULONG count = m_pIDirect3DDevice8->Release();
	delete(this);  // destructor will be called automatically

	return(count);
}

HRESULT FakeDirect3DDevice8::TestCooperativeLevel(void)
{
	return(m_pIDirect3DDevice8->TestCooperativeLevel());
}

UINT FakeDirect3DDevice8::GetAvailableTextureMem(void)
{
	return m_pIDirect3DDevice8->GetAvailableTextureMem();
}
HRESULT FakeDirect3DDevice8::GetDirect3D(IDirect3D8** ppD3D8)
{
	return(m_pIDirect3DDevice8->GetDirect3D(ppD3D8));
}

HRESULT FakeDirect3DDevice8::GetDeviceCaps(D3DCAPS8* pCaps)
{
	return(m_pIDirect3DDevice8->GetDeviceCaps(pCaps));
}

HRESULT FakeDirect3DDevice8::GetDisplayMode(D3DDISPLAYMODE* pMode)
{
	return(m_pIDirect3DDevice8->GetDisplayMode(pMode));
}

HRESULT FakeDirect3DDevice8::GetCreationParameters(D3DDEVICE_CREATION_PARAMETERS* pParameters)
{
	return(m_pIDirect3DDevice8->GetCreationParameters(pParameters));
}

HRESULT FakeDirect3DDevice8::SetCursorProperties(UINT XHotSpot, UINT YHotSpot, IDirect3DSurface8* pCursorBitmap)
{
	return(m_pIDirect3DDevice8->SetCursorProperties(XHotSpot, YHotSpot, pCursorBitmap));
}

void FakeDirect3DDevice8::SetCursorPosition(int X, int Y, DWORD Flags)
{
	return(m_pIDirect3DDevice8->SetCursorPosition(X, Y, Flags));
}

BOOL FakeDirect3DDevice8::ShowCursor(BOOL bShow)
{
	return(m_pIDirect3DDevice8->ShowCursor(bShow));
}

HRESULT FakeDirect3DDevice8::CreateAdditionalSwapChain(D3DPRESENT_PARAMETERS* pPresentationParameters, IDirect3DSwapChain8** pSwapChain)
{
	return(m_pIDirect3DDevice8->CreateAdditionalSwapChain(pPresentationParameters, pSwapChain));
}
HRESULT FakeDirect3DDevice8::Reset(D3DPRESENT_PARAMETERS* pPresentationParameters)
{
	return(m_pIDirect3DDevice8->Reset(pPresentationParameters));
}

HRESULT FakeDirect3DDevice8::Present(CONST RECT* pSourceRect, CONST RECT* pDestRect, HWND hDestWindowOverride, CONST RGNDATA* pDirtyRegion)
{
	return (m_pIDirect3DDevice8->Present(pSourceRect, pDestRect, hDestWindowOverride, pDirtyRegion));
}

HRESULT FakeDirect3DDevice8::GetBackBuffer(UINT iBackBuffer, D3DBACKBUFFER_TYPE Type, IDirect3DSurface8** ppBackBuffer)
{

	return(m_pIDirect3DDevice8->GetBackBuffer(iBackBuffer, Type, ppBackBuffer));
}

HRESULT FakeDirect3DDevice8::GetRasterStatus(D3DRASTER_STATUS* pRasterStatus)
{
	return(m_pIDirect3DDevice8->GetRasterStatus(pRasterStatus));
}
void FakeDirect3DDevice8::SetGammaRamp(DWORD Flags, CONST D3DGAMMARAMP* pRamp)
{

	return(m_pIDirect3DDevice8->SetGammaRamp(Flags, pRamp));
}

void FakeDirect3DDevice8::GetGammaRamp(D3DGAMMARAMP* pRamp)
{
	return(m_pIDirect3DDevice8->GetGammaRamp(pRamp));
}

HRESULT FakeDirect3DDevice8::CreateTexture(UINT Width, UINT Height, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DTexture8** ppTexture)
{
	return(m_pIDirect3DDevice8->CreateTexture(Width, Height, Levels, Usage, Format, Pool, ppTexture));
}

HRESULT FakeDirect3DDevice8::CreateVolumeTexture(UINT Width, UINT Height, UINT Depth, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DVolumeTexture8** ppVolumeTexture)
{
	return(m_pIDirect3DDevice8->CreateVolumeTexture(Width, Height, Depth, Levels, Usage, Format, Pool, ppVolumeTexture));
}

HRESULT FakeDirect3DDevice8::CreateCubeTexture(UINT EdgeLength, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DCubeTexture8** ppCubeTexture)
{
	return(m_pIDirect3DDevice8->CreateCubeTexture(EdgeLength, Levels, Usage, Format, Pool, ppCubeTexture));
}
HRESULT FakeDirect3DDevice8::CreateVertexBuffer(UINT Length, DWORD Usage, DWORD FVF, D3DPOOL Pool, IDirect3DVertexBuffer8** ppVertexBuffer)
{
	return(m_pIDirect3DDevice8->CreateVertexBuffer(Length, Usage, FVF, Pool, ppVertexBuffer));
}

HRESULT FakeDirect3DDevice8::CreateIndexBuffer(UINT Length, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DIndexBuffer8** ppIndexBuffer)
{
	return(m_pIDirect3DDevice8->CreateIndexBuffer(Length, Usage, Format, Pool, ppIndexBuffer));
}

HRESULT FakeDirect3DDevice8::CreateRenderTarget(UINT Width, UINT Height, D3DFORMAT Format, D3DMULTISAMPLE_TYPE MultiSample, BOOL Lockable, IDirect3DSurface8** ppSurface)
{
	return(m_pIDirect3DDevice8->CreateRenderTarget(Width, Height, Format, MultiSample, Lockable, ppSurface));
}

HRESULT FakeDirect3DDevice8::CreateDepthStencilSurface(UINT Width, UINT Height, D3DFORMAT Format, D3DMULTISAMPLE_TYPE MultiSample, IDirect3DSurface8** ppSurface)
{
	return(m_pIDirect3DDevice8->CreateDepthStencilSurface(Width, Height, Format, MultiSample, ppSurface));
}
HRESULT FakeDirect3DDevice8::UpdateTexture(IDirect3DBaseTexture8* pSourceTexture, IDirect3DBaseTexture8* pDestinationTexture)
{
	return(m_pIDirect3DDevice8->UpdateTexture(pSourceTexture, pDestinationTexture));
}

HRESULT FakeDirect3DDevice8::SetRenderTarget(IDirect3DSurface8* pRenderTarget, IDirect3DSurface8* pNewZStencil)
{
	return(m_pIDirect3DDevice8->SetRenderTarget(pRenderTarget, pNewZStencil));
}

HRESULT FakeDirect3DDevice8::GetRenderTarget(IDirect3DSurface8** ppRenderTarget)
{
	return(m_pIDirect3DDevice8->GetRenderTarget(ppRenderTarget));
}

HRESULT FakeDirect3DDevice8::GetDepthStencilSurface(IDirect3DSurface8** ppZStencilSurface)
{
	return(m_pIDirect3DDevice8->GetDepthStencilSurface(ppZStencilSurface));
}
HRESULT FakeDirect3DDevice8::Clear(DWORD Count, CONST D3DRECT* pRects, DWORD Flags, D3DCOLOR Color, float Z, DWORD Stencil)
{
	return(m_pIDirect3DDevice8->Clear(Count, pRects, Flags, Color, Z, Stencil));
}

HRESULT FakeDirect3DDevice8::SetTransform(D3DTRANSFORMSTATETYPE State, CONST D3DMATRIX* pMatrix)
{
	return(m_pIDirect3DDevice8->SetTransform(State, pMatrix));
}

HRESULT FakeDirect3DDevice8::GetTransform(D3DTRANSFORMSTATETYPE State, D3DMATRIX* pMatrix)
{
	return(m_pIDirect3DDevice8->GetTransform(State, pMatrix));
}

HRESULT FakeDirect3DDevice8::MultiplyTransform(D3DTRANSFORMSTATETYPE State, CONST D3DMATRIX* pMatrix)
{
	return(m_pIDirect3DDevice8->MultiplyTransform(State, pMatrix));
}

HRESULT FakeDirect3DDevice8::SetViewport(CONST D3DVIEWPORT8* pViewport)
{
	return(m_pIDirect3DDevice8->SetViewport(pViewport));
}

HRESULT FakeDirect3DDevice8::GetViewport(D3DVIEWPORT8* pViewport)
{
	return(m_pIDirect3DDevice8->GetViewport(pViewport));
}

HRESULT FakeDirect3DDevice8::SetMaterial(CONST D3DMATERIAL8* pMaterial)
{
	return(m_pIDirect3DDevice8->SetMaterial(pMaterial));
}

HRESULT FakeDirect3DDevice8::GetMaterial(D3DMATERIAL8* pMaterial)
{
	return(m_pIDirect3DDevice8->GetMaterial(pMaterial));
}

HRESULT FakeDirect3DDevice8::SetLight(DWORD Index, CONST D3DLIGHT8* pLight)
{
	return(m_pIDirect3DDevice8->SetLight(Index, pLight));
}

HRESULT FakeDirect3DDevice8::GetLight(DWORD Index, D3DLIGHT8* pLight)
{
	return(m_pIDirect3DDevice8->GetLight(Index, pLight));
}

HRESULT FakeDirect3DDevice8::LightEnable(DWORD Index, BOOL Enable)
{
	return(m_pIDirect3DDevice8->LightEnable(Index, Enable));
}

HRESULT FakeDirect3DDevice8::GetLightEnable(DWORD Index, BOOL* pEnable)
{
	return(m_pIDirect3DDevice8->GetLightEnable(Index, pEnable));
}

HRESULT FakeDirect3DDevice8::SetClipPlane(DWORD Index, CONST float* pPlane)
{
	return(m_pIDirect3DDevice8->SetClipPlane(Index, pPlane));
}

HRESULT FakeDirect3DDevice8::GetClipPlane(DWORD Index, float* pPlane)
{
	return(m_pIDirect3DDevice8->GetClipPlane(Index, pPlane));
}

HRESULT FakeDirect3DDevice8::SetRenderState(D3DRENDERSTATETYPE State, DWORD Value)
{
	return(m_pIDirect3DDevice8->SetRenderState(State, Value));
}

HRESULT FakeDirect3DDevice8::GetRenderState(D3DRENDERSTATETYPE State, DWORD* pValue)
{
	return(m_pIDirect3DDevice8->GetRenderState(State, pValue));
}
HRESULT FakeDirect3DDevice8::CreateStateBlock(D3DSTATEBLOCKTYPE Type, DWORD* pToken)
{
	return(m_pIDirect3DDevice8->CreateStateBlock(Type, pToken));
}

HRESULT FakeDirect3DDevice8::BeginStateBlock(void)
{
	return(m_pIDirect3DDevice8->BeginStateBlock());
}
HRESULT FakeDirect3DDevice8::EndStateBlock(DWORD* pToken)
{
	return(m_pIDirect3DDevice8->EndStateBlock(pToken));
}

HRESULT FakeDirect3DDevice8::SetClipStatus(CONST D3DCLIPSTATUS8* pClipStatus)
{
	return(m_pIDirect3DDevice8->SetClipStatus(pClipStatus));
}

HRESULT FakeDirect3DDevice8::GetClipStatus(D3DCLIPSTATUS8* pClipStatus)
{
	return(m_pIDirect3DDevice8->GetClipStatus(pClipStatus));
}

HRESULT FakeDirect3DDevice8::GetTexture(DWORD Stage, IDirect3DBaseTexture8** ppTexture)
{
	return(m_pIDirect3DDevice8->GetTexture(Stage, ppTexture));
}

HRESULT FakeDirect3DDevice8::SetTexture(DWORD Stage, IDirect3DBaseTexture8* pTexture)
{
	return(m_pIDirect3DDevice8->SetTexture(Stage, pTexture));
}

HRESULT FakeDirect3DDevice8::GetTextureStageState(DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD* pValue)
{
	return(m_pIDirect3DDevice8->GetTextureStageState(Stage, Type, pValue));
}

HRESULT FakeDirect3DDevice8::SetTextureStageState(DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD Value)
{
	return(m_pIDirect3DDevice8->SetTextureStageState(Stage, Type, Value));
}
HRESULT FakeDirect3DDevice8::ValidateDevice(DWORD* pNumPasses)
{
	return(m_pIDirect3DDevice8->ValidateDevice(pNumPasses));
}

HRESULT FakeDirect3DDevice8::SetPaletteEntries(UINT PaletteNumber, CONST PALETTEENTRY* pEntries)
{
	return(m_pIDirect3DDevice8->SetPaletteEntries(PaletteNumber, pEntries));
}

HRESULT FakeDirect3DDevice8::GetPaletteEntries(UINT PaletteNumber, PALETTEENTRY* pEntries)
{
	return(m_pIDirect3DDevice8->GetPaletteEntries(PaletteNumber, pEntries));
}

HRESULT FakeDirect3DDevice8::SetCurrentTexturePalette(UINT PaletteNumber)
{
	return(m_pIDirect3DDevice8->SetCurrentTexturePalette(PaletteNumber));
}

HRESULT FakeDirect3DDevice8::GetCurrentTexturePalette(UINT* PaletteNumber)
{
	return(m_pIDirect3DDevice8->GetCurrentTexturePalette(PaletteNumber));
}

HRESULT FakeDirect3DDevice8::DrawPrimitive(D3DPRIMITIVETYPE PrimitiveType, UINT StartVertex, UINT PrimitiveCount)
{
	return(m_pIDirect3DDevice8->DrawPrimitive(PrimitiveType, StartVertex, PrimitiveCount));
}

HRESULT FakeDirect3DDevice8::DrawIndexedPrimitive(D3DPRIMITIVETYPE PrimitiveType, UINT minIndex, UINT NumVertices, UINT startIndex, UINT primCount)
{
	return(m_pIDirect3DDevice8->DrawIndexedPrimitive(PrimitiveType, minIndex, NumVertices, startIndex, primCount));
}

HRESULT FakeDirect3DDevice8::DrawPrimitiveUP(D3DPRIMITIVETYPE PrimitiveType, UINT PrimitiveCount, CONST void* pVertexStreamZeroData, UINT VertexStreamZeroStride)
{
	return(m_pIDirect3DDevice8->DrawPrimitiveUP(PrimitiveType, PrimitiveCount, pVertexStreamZeroData, VertexStreamZeroStride));
}

HRESULT FakeDirect3DDevice8::DrawIndexedPrimitiveUP(D3DPRIMITIVETYPE PrimitiveType, UINT MinVertexIndex, UINT NumVertices, UINT PrimitiveCount, CONST void* pIndexData, D3DFORMAT IndexDataFormat, CONST void* pVertexStreamZeroData, UINT VertexStreamZeroStride)
{
	return(m_pIDirect3DDevice8->DrawIndexedPrimitiveUP(PrimitiveType, MinVertexIndex, NumVertices, PrimitiveCount, pIndexData, IndexDataFormat, pVertexStreamZeroData, VertexStreamZeroStride));
}

HRESULT FakeDirect3DDevice8::ProcessVertices(UINT SrcStartIndex, UINT DestIndex, UINT VertexCount, IDirect3DVertexBuffer8* pDestBuffer, DWORD Flags)
{
	return(m_pIDirect3DDevice8->ProcessVertices(SrcStartIndex, DestIndex, VertexCount, pDestBuffer, Flags));
}

HRESULT FakeDirect3DDevice8::CreateVertexShader(CONST DWORD* pDeclaration, CONST DWORD* pFunction, DWORD* Handle, DWORD Usage)
{
	return(m_pIDirect3DDevice8->CreateVertexShader(pDeclaration, pFunction, Handle, Usage));
}

HRESULT FakeDirect3DDevice8::SetVertexShader(DWORD Handle)
{
	return(m_pIDirect3DDevice8->SetVertexShader(Handle));
}

HRESULT FakeDirect3DDevice8::GetVertexShader(DWORD* Handle)
{
	return(m_pIDirect3DDevice8->GetVertexShader(Handle));
}

HRESULT FakeDirect3DDevice8::SetVertexShaderConstant(UINT StartRegister, CONST int* pConstantData, UINT Vector4iCount)
{
	return(m_pIDirect3DDevice8->SetVertexShaderConstant(StartRegister, pConstantData, Vector4iCount));
}

HRESULT FakeDirect3DDevice8::GetVertexShaderConstant(UINT StartRegister, int* pConstantData, UINT Vector4iCount)
{
	return(m_pIDirect3DDevice8->GetVertexShaderConstant(StartRegister, pConstantData, Vector4iCount));
}

HRESULT FakeDirect3DDevice8::SetStreamSource(UINT StreamNumber, IDirect3DVertexBuffer8* pStreamData, UINT Stride)
{
	return(m_pIDirect3DDevice8->SetStreamSource(StreamNumber, pStreamData, Stride));
}

HRESULT FakeDirect3DDevice8::GetStreamSource(UINT StreamNumber, IDirect3DVertexBuffer8** ppStreamData, UINT* pStride)
{

	return(m_pIDirect3DDevice8->GetStreamSource(StreamNumber, ppStreamData, pStride));
}

HRESULT FakeDirect3DDevice8::SetIndices(IDirect3DIndexBuffer8* pIndexData, UINT BaseVertexIndex)
{
	return(m_pIDirect3DDevice8->SetIndices(pIndexData, BaseVertexIndex));
}

HRESULT FakeDirect3DDevice8::GetIndices(IDirect3DIndexBuffer8** ppIndexData, UINT* BaseVertexIndex)
{
	return(m_pIDirect3DDevice8->GetIndices(ppIndexData, BaseVertexIndex));
}

HRESULT FakeDirect3DDevice8::CreatePixelShader(CONST DWORD* pFunction, DWORD* pHandle)
{
	return(m_pIDirect3DDevice8->CreatePixelShader(pFunction, pHandle));
}

HRESULT FakeDirect3DDevice8::SetPixelShader(DWORD Handle)
{
	return(m_pIDirect3DDevice8->SetPixelShader(Handle));
}

HRESULT FakeDirect3DDevice8::GetPixelShader(DWORD* pHandle)
{
	return(m_pIDirect3DDevice8->GetPixelShader(pHandle));
}

HRESULT FakeDirect3DDevice8::DrawRectPatch(UINT Handle, CONST float* pNumSegs, CONST D3DRECTPATCH_INFO* pRectPatchInfo)
{
	return(m_pIDirect3DDevice8->DrawRectPatch(Handle, pNumSegs, pRectPatchInfo));
}

HRESULT FakeDirect3DDevice8::DrawTriPatch(UINT Handle, CONST float* pNumSegs, CONST D3DTRIPATCH_INFO* pTriPatchInfo)
{
	return(m_pIDirect3DDevice8->DrawTriPatch(Handle, pNumSegs, pTriPatchInfo));
}

HRESULT FakeDirect3DDevice8::DeletePatch(UINT Handle)
{
	return(m_pIDirect3DDevice8->DeletePatch(Handle));
}

HRESULT FakeDirect3DDevice8::ResourceManagerDiscardBytes(DWORD Bytes)
{
	return (m_pIDirect3DDevice8->ResourceManagerDiscardBytes(Bytes));
}

COM_DECLSPEC_NOTHROW void FakeDirect3DDevice8::SetCursorPosition(UINT XScreenSpace, UINT YScreenSpace, DWORD Flags)
{

	return (m_pIDirect3DDevice8->SetCursorPosition(XScreenSpace, YScreenSpace, Flags));
}

COM_DECLSPEC_NOTHROW HRESULT FakeDirect3DDevice8::CreateImageSurface(UINT Width, UINT Height, D3DFORMAT Format, IDirect3DSurface8** ppSurface)
{
	return (m_pIDirect3DDevice8->CreateImageSurface(Width, Height, Format, ppSurface));
}

COM_DECLSPEC_NOTHROW HRESULT FakeDirect3DDevice8::CopyRects(IDirect3DSurface8* pSourceSurface, CONST RECT* pSourceRectsArray, UINT cRects, IDirect3DSurface8* pDestinationSurface, CONST POINT* pDestPointsArray)
{
	return  (m_pIDirect3DDevice8->CopyRects(pSourceSurface, pSourceRectsArray, cRects, pDestinationSurface, pDestPointsArray));
}

COM_DECLSPEC_NOTHROW HRESULT FakeDirect3DDevice8::GetFrontBuffer(IDirect3DSurface8* pDestSurface)
{
	return (m_pIDirect3DDevice8->GetFrontBuffer(pDestSurface));
}

COM_DECLSPEC_NOTHROW HRESULT FakeDirect3DDevice8::ApplyStateBlock(DWORD Token)
{
	return (m_pIDirect3DDevice8->ApplyStateBlock(Token));
}

COM_DECLSPEC_NOTHROW HRESULT FakeDirect3DDevice8::CaptureStateBlock(DWORD Token)
{
	return (m_pIDirect3DDevice8->CaptureStateBlock(Token));
}

COM_DECLSPEC_NOTHROW HRESULT FakeDirect3DDevice8::DeleteStateBlock(DWORD Token)
{
	return (m_pIDirect3DDevice8->DeleteStateBlock(Token));
}

COM_DECLSPEC_NOTHROW HRESULT FakeDirect3DDevice8::SetVertexShaderConstant(DWORD Register, const void* pConstantData, DWORD ConstantCount)
{
	return (m_pIDirect3DDevice8->SetVertexShaderConstant(Register, pConstantData, ConstantCount));
}
COM_DECLSPEC_NOTHROW HRESULT FakeDirect3DDevice8::GetVertexShaderConstant(DWORD Register, void* pConstantData, DWORD ConstantCount)
{
	return (m_pIDirect3DDevice8->GetVertexShaderConstant(Register, pConstantData, ConstantCount));
}

COM_DECLSPEC_NOTHROW HRESULT FakeDirect3DDevice8::GetVertexShaderDeclaration(DWORD Handle, void* pData, DWORD* pSizeOfData)
{
	return(m_pIDirect3DDevice8->GetVertexShaderDeclaration(Handle, pData, pSizeOfData));
}

COM_DECLSPEC_NOTHROW HRESULT FakeDirect3DDevice8::GetVertexShaderFunction(DWORD Handle, void* pData, DWORD* pSizeOfData)
{
	return(m_pIDirect3DDevice8->GetVertexShaderFunction(Handle, pData, pSizeOfData));
}

COM_DECLSPEC_NOTHROW HRESULT FakeDirect3DDevice8::DeletePixelShader(DWORD Handle)
{
	return(m_pIDirect3DDevice8->DeletePixelShader(Handle));
}

COM_DECLSPEC_NOTHROW HRESULT FakeDirect3DDevice8::SetPixelShaderConstant(DWORD Register, CONST void* pConstantData, DWORD ConstantCount)
{
	return(m_pIDirect3DDevice8->SetPixelShaderConstant(Register, pConstantData, ConstantCount));
}

COM_DECLSPEC_NOTHROW HRESULT FakeDirect3DDevice8::GetPixelShaderConstant(DWORD Register, void* pConstantData, DWORD ConstantCount)
{
	return(m_pIDirect3DDevice8->GetPixelShaderConstant(Register, pConstantData, ConstantCount));
}

COM_DECLSPEC_NOTHROW HRESULT FakeDirect3DDevice8::GetPixelShaderFunction(DWORD Handle, void* pData, DWORD* pSizeOfData)
{

	return(m_pIDirect3DDevice8->GetPixelShaderFunction(Handle, pData, pSizeOfData));
}

COM_DECLSPEC_NOTHROW HRESULT FakeDirect3DDevice8::GetInfo(DWORD DevInfoID, VOID* pDevInfoStruct, DWORD DevInfoStructSize)
{
	return (m_pIDirect3DDevice8->GetInfo(DevInfoID, pDevInfoStruct, DevInfoStructSize));
}

COM_DECLSPEC_NOTHROW HRESULT FakeDirect3DDevice8::DeleteVertexShader(DWORD Handle)
{
	return (m_pIDirect3DDevice8->DeleteVertexShader(Handle));
}
