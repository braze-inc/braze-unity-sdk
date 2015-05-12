#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePointManager/SPKey
struct SPKey_t1605;
// System.Uri
struct Uri_t1553;
// System.Object
struct Object_t;

// System.Void System.Net.ServicePointManager/SPKey::.ctor(System.Uri,System.Boolean)
 void SPKey__ctor_m6915 (SPKey_t1605 * __this, Uri_t1553 * ___uri, bool ___use_connect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager/SPKey::GetHashCode()
 int32_t SPKey_GetHashCode_m6916 (SPKey_t1605 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/SPKey::Equals(System.Object)
 bool SPKey_Equals_m6917 (SPKey_t1605 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
