

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed May 14 13:45:01 2014
 */
/* Compiler settings for RegFreeComNativeInterfaces.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
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


#ifndef __RegFreeComNativeInterfaces_i_h__
#define __RegFreeComNativeInterfaces_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMyService_FWD_DEFINED__
#define __IMyService_FWD_DEFINED__
typedef interface IMyService IMyService;
#endif 	/* __IMyService_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __RegFreeComNativeInterfacesLib_LIBRARY_DEFINED__
#define __RegFreeComNativeInterfacesLib_LIBRARY_DEFINED__

/* library RegFreeComNativeInterfacesLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_RegFreeComNativeInterfacesLib;

#ifndef __IMyService_INTERFACE_DEFINED__
#define __IMyService_INTERFACE_DEFINED__

/* interface IMyService */
/* [uuid][object] */ 


EXTERN_C const IID IID_IMyService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C304A65A-79AF-407E-9598-EB1909A62161")
    IMyService : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSomeHandle( 
            /* [out] */ void **someHandle) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMyServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMyService * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMyService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMyService * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSomeHandle )( 
            IMyService * This,
            /* [out] */ void **someHandle);
        
        END_INTERFACE
    } IMyServiceVtbl;

    interface IMyService
    {
        CONST_VTBL struct IMyServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMyService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMyService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMyService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMyService_GetSomeHandle(This,someHandle)	\
    ( (This)->lpVtbl -> GetSomeHandle(This,someHandle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMyService_INTERFACE_DEFINED__ */

#endif /* __RegFreeComNativeInterfacesLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


