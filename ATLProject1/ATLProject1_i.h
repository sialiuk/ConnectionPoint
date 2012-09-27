

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Thu Sep 27 17:38:28 2012
 */
/* Compiler settings for ATLProject1.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ATLProject1_i_h__
#define __ATLProject1_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IPainter_FWD_DEFINED__
#define __IPainter_FWD_DEFINED__
typedef interface IPainter IPainter;

#endif 	/* __IPainter_FWD_DEFINED__ */


#ifndef __ISpectator_FWD_DEFINED__
#define __ISpectator_FWD_DEFINED__
typedef interface ISpectator ISpectator;

#endif 	/* __ISpectator_FWD_DEFINED__ */


#ifndef ___IPainterEvents_FWD_DEFINED__
#define ___IPainterEvents_FWD_DEFINED__
typedef interface _IPainterEvents _IPainterEvents;

#endif 	/* ___IPainterEvents_FWD_DEFINED__ */


#ifndef __Painter_FWD_DEFINED__
#define __Painter_FWD_DEFINED__

#ifdef __cplusplus
typedef class Painter Painter;
#else
typedef struct Painter Painter;
#endif /* __cplusplus */

#endif 	/* __Painter_FWD_DEFINED__ */


#ifndef __Spectator_FWD_DEFINED__
#define __Spectator_FWD_DEFINED__

#ifdef __cplusplus
typedef class Spectator Spectator;
#else
typedef struct Spectator Spectator;
#endif /* __cplusplus */

#endif 	/* __Spectator_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IPainter_INTERFACE_DEFINED__
#define __IPainter_INTERFACE_DEFINED__

/* interface IPainter */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IPainter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("60A0ECC1-E1F3-4786-B9E0-683FFD425F1D")
    IPainter : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Draw( 
            /* [in] */ BSTR figure) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPainterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPainter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPainter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPainter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPainter * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPainter * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPainter * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPainter * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Draw )( 
            IPainter * This,
            /* [in] */ BSTR figure);
        
        END_INTERFACE
    } IPainterVtbl;

    interface IPainter
    {
        CONST_VTBL struct IPainterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPainter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPainter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPainter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPainter_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPainter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPainter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPainter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPainter_Draw(This,figure)	\
    ( (This)->lpVtbl -> Draw(This,figure) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPainter_INTERFACE_DEFINED__ */


#ifndef __ISpectator_INTERFACE_DEFINED__
#define __ISpectator_INTERFACE_DEFINED__

/* interface ISpectator */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISpectator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2197D9BB-DEE6-4BE5-8910-BB50B213222C")
    ISpectator : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Connect( 
            /* [in] */ IUnknown *painter) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Disconnect( 
            /* [in] */ IUnknown *painter) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpectatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpectator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpectator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpectator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISpectator * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISpectator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISpectator * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISpectator * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            ISpectator * This,
            /* [in] */ IUnknown *painter);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            ISpectator * This,
            /* [in] */ IUnknown *painter);
        
        END_INTERFACE
    } ISpectatorVtbl;

    interface ISpectator
    {
        CONST_VTBL struct ISpectatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpectator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpectator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpectator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpectator_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISpectator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISpectator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISpectator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISpectator_Connect(This,painter)	\
    ( (This)->lpVtbl -> Connect(This,painter) ) 

#define ISpectator_Disconnect(This,painter)	\
    ( (This)->lpVtbl -> Disconnect(This,painter) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpectator_INTERFACE_DEFINED__ */



#ifndef __ATLProject1Lib_LIBRARY_DEFINED__
#define __ATLProject1Lib_LIBRARY_DEFINED__

/* library ATLProject1Lib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ATLProject1Lib;

#ifndef ___IPainterEvents_DISPINTERFACE_DEFINED__
#define ___IPainterEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IPainterEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IPainterEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2F2541F8-2525-4B0A-99CE-4B9DB9E98147")
    _IPainterEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IPainterEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IPainterEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IPainterEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IPainterEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IPainterEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IPainterEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IPainterEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IPainterEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _IPainterEventsVtbl;

    interface _IPainterEvents
    {
        CONST_VTBL struct _IPainterEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IPainterEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IPainterEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IPainterEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IPainterEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IPainterEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IPainterEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IPainterEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IPainterEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Painter;

#ifdef __cplusplus

class DECLSPEC_UUID("21A13851-A7B0-4402-86E1-EA26B3A146DA")
Painter;
#endif

EXTERN_C const CLSID CLSID_Spectator;

#ifdef __cplusplus

class DECLSPEC_UUID("E4BD6117-4099-42AD-8E5D-D2CF1B32C4ED")
Spectator;
#endif
#endif /* __ATLProject1Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


