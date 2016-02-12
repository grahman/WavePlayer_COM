

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IGMBAudioPlayerCOMObj,0x2924B6D3,0x8E33,0x44B3,0x8C,0xFD,0xA4,0xF1,0x08,0x36,0x4E,0xDD);


MIDL_DEFINE_GUID(IID, LIBID_GMBAudioCOMLib,0x11CE4373,0x19CF,0x4FB7,0x83,0x50,0xD5,0x45,0xC2,0x2F,0x85,0x2F);


MIDL_DEFINE_GUID(IID, DIID__IGMBAudioPlayerCOMObjEvents,0x67057808,0x2DC6,0x4449,0xA3,0x2E,0x57,0xAE,0xF7,0x76,0x47,0x1E);


MIDL_DEFINE_GUID(CLSID, CLSID_GMBAudioPlayerCOMObj,0x9F376ED9,0x4052,0x4DB0,0xB3,0xBE,0x24,0x23,0x39,0xA3,0xD0,0x37);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



