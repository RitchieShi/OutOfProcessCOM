/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Fri Dec 19 01:51:33 2014
 */
/* Compiler settings for C:\Users\Jacky_Shi\Desktop\outProc\OutProcCom.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
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

#ifndef __OutProcCom_h__
#define __OutProcCom_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __ISampleObj_FWD_DEFINED__
#define __ISampleObj_FWD_DEFINED__
typedef interface ISampleObj ISampleObj;
#endif 	/* __ISampleObj_FWD_DEFINED__ */


#ifndef __SampleObj_FWD_DEFINED__
#define __SampleObj_FWD_DEFINED__

#ifdef __cplusplus
typedef class SampleObj SampleObj;
#else
typedef struct SampleObj SampleObj;
#endif /* __cplusplus */

#endif 	/* __SampleObj_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __ISampleObj_INTERFACE_DEFINED__
#define __ISampleObj_INTERFACE_DEFINED__

/* interface ISampleObj */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISampleObj;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FA3F042D-7C98-49B6-A636-A095AB97CED1")
    ISampleObj : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_get_add( 
            /* [in] */ int a,
            /* [in] */ int b,
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_get_add( 
            /* [in] */ int a,
            /* [in] */ int b,
            /* [in] */ long newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISampleObjVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ISampleObj __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ISampleObj __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ISampleObj __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            ISampleObj __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            ISampleObj __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            ISampleObj __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            ISampleObj __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_get_add )( 
            ISampleObj __RPC_FAR * This,
            /* [in] */ int a,
            /* [in] */ int b,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_get_add )( 
            ISampleObj __RPC_FAR * This,
            /* [in] */ int a,
            /* [in] */ int b,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } ISampleObjVtbl;

    interface ISampleObj
    {
        CONST_VTBL struct ISampleObjVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISampleObj_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISampleObj_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISampleObj_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISampleObj_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ISampleObj_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ISampleObj_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ISampleObj_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ISampleObj_get_get_add(This,a,b,pVal)	\
    (This)->lpVtbl -> get_get_add(This,a,b,pVal)

#define ISampleObj_put_get_add(This,a,b,newVal)	\
    (This)->lpVtbl -> put_get_add(This,a,b,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE ISampleObj_get_get_add_Proxy( 
    ISampleObj __RPC_FAR * This,
    /* [in] */ int a,
    /* [in] */ int b,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB ISampleObj_get_get_add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE ISampleObj_put_get_add_Proxy( 
    ISampleObj __RPC_FAR * This,
    /* [in] */ int a,
    /* [in] */ int b,
    /* [in] */ long newVal);


void __RPC_STUB ISampleObj_put_get_add_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISampleObj_INTERFACE_DEFINED__ */



#ifndef __OUTPROCCOMLib_LIBRARY_DEFINED__
#define __OUTPROCCOMLib_LIBRARY_DEFINED__

/* library OUTPROCCOMLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_OUTPROCCOMLib;

EXTERN_C const CLSID CLSID_SampleObj;

#ifdef __cplusplus

class DECLSPEC_UUID("7013D610-C41D-415A-BAF7-879D07003BE5")
SampleObj;
#endif
#endif /* __OUTPROCCOMLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
