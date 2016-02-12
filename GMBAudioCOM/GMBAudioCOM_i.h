

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Fri Feb 12 00:25:35 2016
 */
/* Compiler settings for GMBAudioCOM.idl:
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

#ifndef __GMBAudioCOM_i_h__
#define __GMBAudioCOM_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IGMBAudioPlayerCOMObj_FWD_DEFINED__
#define __IGMBAudioPlayerCOMObj_FWD_DEFINED__
typedef interface IGMBAudioPlayerCOMObj IGMBAudioPlayerCOMObj;

#endif 	/* __IGMBAudioPlayerCOMObj_FWD_DEFINED__ */


#ifndef ___IGMBAudioPlayerCOMObjEvents_FWD_DEFINED__
#define ___IGMBAudioPlayerCOMObjEvents_FWD_DEFINED__
typedef interface _IGMBAudioPlayerCOMObjEvents _IGMBAudioPlayerCOMObjEvents;

#endif 	/* ___IGMBAudioPlayerCOMObjEvents_FWD_DEFINED__ */


#ifndef __GMBAudioPlayerCOMObj_FWD_DEFINED__
#define __GMBAudioPlayerCOMObj_FWD_DEFINED__

#ifdef __cplusplus
typedef class GMBAudioPlayerCOMObj GMBAudioPlayerCOMObj;
#else
typedef struct GMBAudioPlayerCOMObj GMBAudioPlayerCOMObj;
#endif /* __cplusplus */

#endif 	/* __GMBAudioPlayerCOMObj_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IGMBAudioPlayerCOMObj_INTERFACE_DEFINED__
#define __IGMBAudioPlayerCOMObj_INTERFACE_DEFINED__

/* interface IGMBAudioPlayerCOMObj */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IGMBAudioPlayerCOMObj;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2924B6D3-8E33-44B3-8CFD-A4F108364EDD")
    IGMBAudioPlayerCOMObj : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Construct( 
            CHAR *_path) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_State( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Init( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Run( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGMBAudioPlayerCOMObjVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGMBAudioPlayerCOMObj * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGMBAudioPlayerCOMObj * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGMBAudioPlayerCOMObj * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IGMBAudioPlayerCOMObj * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IGMBAudioPlayerCOMObj * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IGMBAudioPlayerCOMObj * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IGMBAudioPlayerCOMObj * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Construct )( 
            IGMBAudioPlayerCOMObj * This,
            CHAR *_path);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            IGMBAudioPlayerCOMObj * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_State )( 
            IGMBAudioPlayerCOMObj * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IGMBAudioPlayerCOMObj * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Run )( 
            IGMBAudioPlayerCOMObj * This);
        
        END_INTERFACE
    } IGMBAudioPlayerCOMObjVtbl;

    interface IGMBAudioPlayerCOMObj
    {
        CONST_VTBL struct IGMBAudioPlayerCOMObjVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGMBAudioPlayerCOMObj_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGMBAudioPlayerCOMObj_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGMBAudioPlayerCOMObj_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGMBAudioPlayerCOMObj_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IGMBAudioPlayerCOMObj_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IGMBAudioPlayerCOMObj_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IGMBAudioPlayerCOMObj_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IGMBAudioPlayerCOMObj_Construct(This,_path)	\
    ( (This)->lpVtbl -> Construct(This,_path) ) 

#define IGMBAudioPlayerCOMObj_get_State(This,pVal)	\
    ( (This)->lpVtbl -> get_State(This,pVal) ) 

#define IGMBAudioPlayerCOMObj_put_State(This,newVal)	\
    ( (This)->lpVtbl -> put_State(This,newVal) ) 

#define IGMBAudioPlayerCOMObj_Init(This)	\
    ( (This)->lpVtbl -> Init(This) ) 

#define IGMBAudioPlayerCOMObj_Run(This)	\
    ( (This)->lpVtbl -> Run(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGMBAudioPlayerCOMObj_INTERFACE_DEFINED__ */



#ifndef __GMBAudioCOMLib_LIBRARY_DEFINED__
#define __GMBAudioCOMLib_LIBRARY_DEFINED__

/* library GMBAudioCOMLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_GMBAudioCOMLib;

#ifndef ___IGMBAudioPlayerCOMObjEvents_DISPINTERFACE_DEFINED__
#define ___IGMBAudioPlayerCOMObjEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IGMBAudioPlayerCOMObjEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IGMBAudioPlayerCOMObjEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("67057808-2DC6-4449-A32E-57AEF776471E")
    _IGMBAudioPlayerCOMObjEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IGMBAudioPlayerCOMObjEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IGMBAudioPlayerCOMObjEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IGMBAudioPlayerCOMObjEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IGMBAudioPlayerCOMObjEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IGMBAudioPlayerCOMObjEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IGMBAudioPlayerCOMObjEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IGMBAudioPlayerCOMObjEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IGMBAudioPlayerCOMObjEvents * This,
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
    } _IGMBAudioPlayerCOMObjEventsVtbl;

    interface _IGMBAudioPlayerCOMObjEvents
    {
        CONST_VTBL struct _IGMBAudioPlayerCOMObjEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IGMBAudioPlayerCOMObjEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IGMBAudioPlayerCOMObjEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IGMBAudioPlayerCOMObjEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IGMBAudioPlayerCOMObjEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IGMBAudioPlayerCOMObjEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IGMBAudioPlayerCOMObjEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IGMBAudioPlayerCOMObjEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IGMBAudioPlayerCOMObjEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_GMBAudioPlayerCOMObj;

#ifdef __cplusplus

class DECLSPEC_UUID("9F376ED9-4052-4DB0-B3BE-242339A3D037")
GMBAudioPlayerCOMObj;
#endif
#endif /* __GMBAudioCOMLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


