#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t1615;
struct X509ChainStatus_t1615_marshaled;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_0.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ChainStatus::.ctor(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
 void X509ChainStatus__ctor_m6986 (X509ChainStatus_t1615 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::get_Status()
 int32_t X509ChainStatus_get_Status_m6987 (X509ChainStatus_t1615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainStatus::set_Status(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
 void X509ChainStatus_set_Status_m6988 (X509ChainStatus_t1615 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainStatus::set_StatusInformation(System.String)
 void X509ChainStatus_set_StatusInformation_m6989 (X509ChainStatus_t1615 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::GetInformation(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
 String_t* X509ChainStatus_GetInformation_m6990 (Object_t * __this/* static, unused */, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
void X509ChainStatus_t1615_marshal(const X509ChainStatus_t1615& unmarshaled, X509ChainStatus_t1615_marshaled& marshaled);
void X509ChainStatus_t1615_marshal_back(const X509ChainStatus_t1615_marshaled& marshaled, X509ChainStatus_t1615& unmarshaled);
void X509ChainStatus_t1615_marshal_cleanup(X509ChainStatus_t1615_marshaled& marshaled);
