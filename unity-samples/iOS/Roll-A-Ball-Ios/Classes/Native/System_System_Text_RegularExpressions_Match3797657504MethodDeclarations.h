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

// System.Text.RegularExpressions.Match
struct Match_t3797657504;
// System.Text.RegularExpressions.Regex
struct Regex_t3802381858;
// System.Text.RegularExpressions.IMachine
struct IMachine_t294675897;
// System.String
struct String_t;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t2158306392;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Regex3802381858.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Text.RegularExpressions.Match::.ctor()
extern "C"  void Match__ctor_m4051317828 (Match_t3797657504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.IMachine,System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Match__ctor_m798974407 (Match_t3797657504 * __this, Regex_t3802381858 * ___regex, Il2CppObject * ___machine, String_t* ___text, int32_t ___text_length, int32_t ___n_groups, int32_t ___index, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.IMachine,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Match__ctor_m4138800752 (Match_t3797657504 * __this, Regex_t3802381858 * ___regex, Il2CppObject * ___machine, String_t* ___text, int32_t ___text_length, int32_t ___n_groups, int32_t ___index, int32_t ___length, int32_t ___n_caps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.cctor()
extern "C"  void Match__cctor_m554704873 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::get_Empty()
extern "C"  Match_t3797657504 * Match_get_Empty_m170222943 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups()
extern "C"  GroupCollection_t2158306392 * Match_get_Groups_m445730348 (Match_t3797657504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::NextMatch()
extern "C"  Match_t3797657504 * Match_NextMatch_m3913445709 (Match_t3797657504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::get_Regex()
extern "C"  Regex_t3802381858 * Match_get_Regex_m1260760027 (Match_t3797657504 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
