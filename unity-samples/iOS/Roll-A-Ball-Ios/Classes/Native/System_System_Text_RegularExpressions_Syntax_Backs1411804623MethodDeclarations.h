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

// System.Text.RegularExpressions.Syntax.BackslashNumber
struct BackslashNumber_t1411804623;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t93500931;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Hashtable3875263730.h"

// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::.ctor(System.Boolean,System.Boolean)
extern "C"  void BackslashNumber__ctor_m1444209053 (BackslashNumber_t1411804623 * __this, bool ___ignore, bool ___ecma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.BackslashNumber::ResolveReference(System.String,System.Collections.Hashtable)
extern "C"  bool BackslashNumber_ResolveReference_m705827744 (BackslashNumber_t1411804623 * __this, String_t* ___num_str, Hashtable_t3875263730 * ___groups, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void BackslashNumber_Compile_m4016920510 (BackslashNumber_t1411804623 * __this, Il2CppObject * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
