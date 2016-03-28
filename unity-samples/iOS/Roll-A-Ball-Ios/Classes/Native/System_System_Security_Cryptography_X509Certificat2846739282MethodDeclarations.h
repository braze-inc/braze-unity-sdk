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

// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t2846739282;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t123613238;
// Mono.Security.X509.X509Stores
struct X509Stores_t2754714603;
// Mono.Security.X509.X509Store
struct X509Store_t3983467982;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificat3147474787.h"
#include "System_System_Security_Cryptography_X509Certificat4233344013.h"
#include "System_System_Security_Cryptography_X509Certificat2978696884.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Store::.ctor(System.Security.Cryptography.X509Certificates.StoreName,System.Security.Cryptography.X509Certificates.StoreLocation)
extern "C"  void X509Store__ctor_m3799700742 (X509Store_t2846739282 * __this, int32_t ___storeName, int32_t ___storeLocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Store::get_Certificates()
extern "C"  X509Certificate2Collection_t123613238 * X509Store_get_Certificates_m806880954 (X509Store_t2846739282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Stores System.Security.Cryptography.X509Certificates.X509Store::get_Factory()
extern "C"  X509Stores_t2754714603 * X509Store_get_Factory_m1121149181 (X509Store_t2846739282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store System.Security.Cryptography.X509Certificates.X509Store::get_Store()
extern "C"  X509Store_t3983467982 * X509Store_get_Store_m466869703 (X509Store_t2846739282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Close()
extern "C"  void X509Store_Close_m3714886622 (X509Store_t2846739282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Open(System.Security.Cryptography.X509Certificates.OpenFlags)
extern "C"  void X509Store_Open_m4134555080 (X509Store_t2846739282 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
