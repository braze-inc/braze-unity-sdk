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

// Mono.Security.X509.X509Store
struct X509Store_t3983467982;
// System.String
struct String_t;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3336811651;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t273828613;
// Mono.Security.X509.X509Crl
struct X509Crl_t2942805322;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
extern "C"  void X509Store__ctor_m3740673213 (X509Store_t3983467982 * __this, String_t* ___path, bool ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
extern "C"  X509CertificateCollection_t3336811651 * X509Store_get_Certificates_m3817753304 (X509Store_t3983467982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
extern "C"  ArrayList_t2121638921 * X509Store_get_Crls_m2221659197 (X509Store_t3983467982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
extern "C"  ByteU5BU5D_t58506160* X509Store_Load_m507057712 (X509Store_t3983467982 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
extern "C"  X509Certificate_t273828613 * X509Store_LoadCertificate_m2281266908 (X509Store_t3983467982 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
extern "C"  X509Crl_t2942805322 * X509Store_LoadCrl_m371472464 (X509Store_t3983467982 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
extern "C"  bool X509Store_CheckStore_m4197144772 (X509Store_t3983467982 * __this, String_t* ___path, bool ___throwException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
extern "C"  X509CertificateCollection_t3336811651 * X509Store_BuildCertificatesCollection_m1851273927 (X509Store_t3983467982 * __this, String_t* ___storeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
extern "C"  ArrayList_t2121638921 * X509Store_BuildCrlsCollection_m2551806712 (X509Store_t3983467982 * __this, String_t* ___storeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
