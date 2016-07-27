#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.X509.PKCS12/DeriveBytes
struct DeriveBytes_t2715912548;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.ctor()
extern "C"  void DeriveBytes__ctor_m2756803278 (DeriveBytes_t2715912548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.cctor()
extern "C"  void DeriveBytes__cctor_m3374426783 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_HashName(System.String)
extern "C"  void DeriveBytes_set_HashName_m523420758 (DeriveBytes_t2715912548 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_IterationCount(System.Int32)
extern "C"  void DeriveBytes_set_IterationCount_m2864069558 (DeriveBytes_t2715912548 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Password(System.Byte[])
extern "C"  void DeriveBytes_set_Password_m1276093179 (DeriveBytes_t2715912548 * __this, ByteU5BU5D_t58506160* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Salt(System.Byte[])
extern "C"  void DeriveBytes_set_Salt_m319391456 (DeriveBytes_t2715912548 * __this, ByteU5BU5D_t58506160* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::Adjust(System.Byte[],System.Int32,System.Byte[])
extern "C"  void DeriveBytes_Adjust_m4034919030 (DeriveBytes_t2715912548 * __this, ByteU5BU5D_t58506160* ___a0, int32_t ___aOff1, ByteU5BU5D_t58506160* ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::Derive(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t58506160* DeriveBytes_Derive_m2199157985 (DeriveBytes_t2715912548 * __this, ByteU5BU5D_t58506160* ___diversifier0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveKey(System.Int32)
extern "C"  ByteU5BU5D_t58506160* DeriveBytes_DeriveKey_m4278248607 (DeriveBytes_t2715912548 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveIV(System.Int32)
extern "C"  ByteU5BU5D_t58506160* DeriveBytes_DeriveIV_m3746835889 (DeriveBytes_t2715912548 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveMAC(System.Int32)
extern "C"  ByteU5BU5D_t58506160* DeriveBytes_DeriveMAC_m4085842831 (DeriveBytes_t2715912548 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
