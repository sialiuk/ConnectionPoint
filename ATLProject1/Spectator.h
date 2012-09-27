// Spectator.h : Declaration of the CSpectator

#pragma once
#include "resource.h"       // main symbols



#include "ATLProject1_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CSpectator

class ATL_NO_VTABLE CSpectator :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CSpectator, &CLSID_Spectator>,
	public IDispatchImpl<ISpectator, &IID_ISpectator, &LIBID_ATLProject1Lib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IDispEventImpl<1, CSpectator, &__uuidof(_IPainterEvents), &LIBID_ATLProject1Lib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CSpectator()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_SPECTATOR)

BEGIN_SINK_MAP(CSpectator)
	SINK_ENTRY_EX(1,__uuidof(_IPainterEvents), 1, IsDrawn)
END_SINK_MAP()

BEGIN_COM_MAP(CSpectator)
	COM_INTERFACE_ENTRY(ISpectator)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	void __stdcall IsDrawn();
	HRESULT STDMETHODCALLTYPE Connect(IUnknown *painter);       
    HRESULT STDMETHODCALLTYPE Disconnect(IUnknown *painter);
};

OBJECT_ENTRY_AUTO(__uuidof(Spectator), CSpectator)
