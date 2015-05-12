#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.FactoryCache/Key
struct Key_t1660;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"

// System.Void System.Text.RegularExpressions.FactoryCache/Key::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
 void Key__ctor_m7237 (Key_t1660 * __this, String_t* ___pattern, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.FactoryCache/Key::GetHashCode()
 int32_t Key_GetHashCode_m7238 (Key_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.FactoryCache/Key::Equals(System.Object)
 bool Key_Equals_m7239 (Key_t1660 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.FactoryCache/Key::ToString()
 String_t* Key_ToString_m7240 (Key_t1660 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
