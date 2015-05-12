#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.CryptographicException
struct CryptographicException_t1520;
// System.String
struct String_t;
// System.Exception
struct Exception_t82;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t971;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.Cryptography.CryptographicException::.ctor()
 void CryptographicException__ctor_m10682 (CryptographicException_t1520 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
 void CryptographicException__ctor_m6533 (CryptographicException_t1520 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String,System.Exception)
 void CryptographicException__ctor_m6578 (CryptographicException_t1520 * __this, String_t* ___message, Exception_t82 * ___inner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String,System.String)
 void CryptographicException__ctor_m10683 (CryptographicException_t1520 * __this, String_t* ___format, String_t* ___insert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void CryptographicException__ctor_m10684 (CryptographicException_t1520 * __this, SerializationInfo_t971 * ___info, StreamingContext_t972  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
