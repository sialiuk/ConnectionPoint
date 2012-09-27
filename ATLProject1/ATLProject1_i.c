

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

MIDL_DEFINE_GUID(IID, IID_IPainter,0x60A0ECC1,0xE1F3,0x4786,0xB9,0xE0,0x68,0x3F,0xFD,0x42,0x5F,0x1D);


MIDL_DEFINE_GUID(IID, IID_ISpectator,0x2197D9BB,0xDEE6,0x4BE5,0x89,0x10,0xBB,0x50,0xB2,0x13,0x22,0x2C);


MIDL_DEFINE_GUID(IID, LIBID_ATLProject1Lib,0xB6B96E5D,0xE221,0x4F54,0xBE,0x3C,0x0C,0x29,0x92,0xC6,0xAC,0xB3);


MIDL_DEFINE_GUID(IID, DIID__IPainterEvents,0x2F2541F8,0x2525,0x4B0A,0x99,0xCE,0x4B,0x9D,0xB9,0xE9,0x81,0x47);


MIDL_DEFINE_GUID(CLSID, CLSID_Painter,0x21A13851,0xA7B0,0x4402,0x86,0xE1,0xEA,0x26,0xB3,0xA1,0x46,0xDA);


MIDL_DEFINE_GUID(CLSID, CLSID_Spectator,0xE4BD6117,0x4099,0x42AD,0x8E,0x5D,0xD2,0xCF,0x1B,0x32,0xC4,0xED);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



