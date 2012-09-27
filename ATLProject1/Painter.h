// Painter.h : Declaration of the CPainter

#pragma once
#include "resource.h"       // main symbols



#include "ATLProject1_i.h"
#include "_IPainterEvents_CP.H"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CPainter

class ATL_NO_VTABLE CPainter :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CPainter, &CLSID_Painter>,
	public IDispatchImpl<IPainter, &IID_IPainter, &LIBID_ATLProject1Lib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IConnectionPointContainerImpl<CPainter>,
	public CProxy_IPainterEvents<CPainter>,
	public IProvideClassInfo2Impl<&CLSID_Painter, &__uuidof(_IPainterEvents), &LIBID_ATLProject1Lib, 1, 0>
{
public:
	CPainter()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_PAINTER)

BEGIN_CONNECTION_POINT_MAP(CPainter)
	CONNECTION_POINT_ENTRY(__uuidof(_IPainterEvents))
END_CONNECTION_POINT_MAP()

BEGIN_COM_MAP(CPainter)
	COM_INTERFACE_ENTRY(IPainter)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
	COM_INTERFACE_ENTRY(IProvideClassInfo2)
	COM_INTERFACE_ENTRY(IProvideClassInfo)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

	STDMETHOD(Draw)(BSTR figure);
};

OBJECT_ENTRY_AUTO(__uuidof(Painter), CPainter)
