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

// System.Text.RegularExpressions.Group
struct Group_t3792618586;
// System.String
struct String_t;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t1466462303;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Text.RegularExpressions.Group::.ctor(System.String,System.Int32,System.Int32,System.Int32)
extern "C"  void Group__ctor_m3266526719 (Group_t3792618586 * __this, String_t* ___text, int32_t ___index, int32_t ___length, int32_t ___n_caps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Group::.ctor(System.String,System.Int32,System.Int32)
extern "C"  void Group__ctor_m3054050776 (Group_t3792618586 * __this, String_t* ___text, int32_t ___index, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Group::.ctor()
extern "C"  void Group__ctor_m1893910730 (Group_t3792618586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Group::.cctor()
extern "C"  void Group__cctor_m2394561571 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::get_Captures()
extern "C"  CaptureCollection_t1466462303 * Group_get_Captures_m3515423896 (Group_t3792618586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
extern "C"  bool Group_get_Success_m3627958764 (Group_t3792618586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
