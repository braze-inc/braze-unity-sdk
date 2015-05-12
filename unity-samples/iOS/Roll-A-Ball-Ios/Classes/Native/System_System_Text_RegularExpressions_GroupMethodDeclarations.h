#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Group
struct Group_t1550;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t1638;
// System.String
struct String_t;

// System.Void System.Text.RegularExpressions.Group::.ctor(System.String,System.Int32,System.Int32,System.Int32)
 void Group__ctor_m7091 (Group_t1550 * __this, String_t* ___text, int32_t ___index, int32_t ___length, int32_t ___n_caps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Group::.ctor(System.String,System.Int32,System.Int32)
 void Group__ctor_m7092 (Group_t1550 * __this, String_t* ___text, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Group::.ctor()
 void Group__ctor_m7093 (Group_t1550 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Group::.cctor()
 void Group__cctor_m7094 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::get_Captures()
 CaptureCollection_t1638 * Group_get_Captures_m7095 (Group_t1550 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
 bool Group_get_Success_m6652 (Group_t1550 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
