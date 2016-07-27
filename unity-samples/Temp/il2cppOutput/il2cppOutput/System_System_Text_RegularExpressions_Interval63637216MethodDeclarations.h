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

// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Interval63637216.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Text.RegularExpressions.Interval::.ctor(System.Int32,System.Int32)
extern "C"  void Interval__ctor_m4154124910 (Interval_t63637216 * __this, int32_t ___low0, int32_t ___high1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Interval::get_Empty()
extern "C"  Interval_t63637216  Interval_get_Empty_m2836746235 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsDiscontiguous()
extern "C"  bool Interval_get_IsDiscontiguous_m4161255183 (Interval_t63637216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsSingleton()
extern "C"  bool Interval_get_IsSingleton_m4044965956 (Interval_t63637216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsEmpty()
extern "C"  bool Interval_get_IsEmpty_m2142357766 (Interval_t63637216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interval::get_Size()
extern "C"  int32_t Interval_get_Size_m2053259174 (Interval_t63637216 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::IsDisjoint(System.Text.RegularExpressions.Interval)
extern "C"  bool Interval_IsDisjoint_m1461504100 (Interval_t63637216 * __this, Interval_t63637216  ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::IsAdjacent(System.Text.RegularExpressions.Interval)
extern "C"  bool Interval_IsAdjacent_m1171307166 (Interval_t63637216 * __this, Interval_t63637216  ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Text.RegularExpressions.Interval)
extern "C"  bool Interval_Contains_m2884982059 (Interval_t63637216 * __this, Interval_t63637216  ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Int32)
extern "C"  bool Interval_Contains_m724747494 (Interval_t63637216 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Intersects(System.Text.RegularExpressions.Interval)
extern "C"  bool Interval_Intersects_m1836714230 (Interval_t63637216 * __this, Interval_t63637216  ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interval::Merge(System.Text.RegularExpressions.Interval)
extern "C"  void Interval_Merge_m2623693586 (Interval_t63637216 * __this, Interval_t63637216  ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interval::CompareTo(System.Object)
extern "C"  int32_t Interval_CompareTo_m953943694 (Interval_t63637216 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Interval_t63637216;
struct Interval_t63637216_marshaled_pinvoke;

extern "C" void Interval_t63637216_marshal_pinvoke(const Interval_t63637216& unmarshaled, Interval_t63637216_marshaled_pinvoke& marshaled);
extern "C" void Interval_t63637216_marshal_pinvoke_back(const Interval_t63637216_marshaled_pinvoke& marshaled, Interval_t63637216& unmarshaled);
extern "C" void Interval_t63637216_marshal_pinvoke_cleanup(Interval_t63637216_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Interval_t63637216;
struct Interval_t63637216_marshaled_com;

extern "C" void Interval_t63637216_marshal_com(const Interval_t63637216& unmarshaled, Interval_t63637216_marshaled_com& marshaled);
extern "C" void Interval_t63637216_marshal_com_back(const Interval_t63637216_marshaled_com& marshaled, Interval_t63637216& unmarshaled);
extern "C" void Interval_t63637216_marshal_com_cleanup(Interval_t63637216_marshaled_com& marshaled);
