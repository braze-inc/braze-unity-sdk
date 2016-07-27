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

// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t1997143859;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1499093192;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Syntax_Expre1499093192.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Text_RegularExpressions_Position241023812.h"
#include "System_System_Text_RegularExpressions_Interval63637216.h"

// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32)
extern "C"  void AnchorInfo__ctor_m774944594 (AnchorInfo_t1997143859 * __this, Expression_t1499093192 * ___expr0, int32_t ___width1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.String,System.Boolean)
extern "C"  void AnchorInfo__ctor_m2237276956 (AnchorInfo_t1997143859 * __this, Expression_t1499093192 * ___expr0, int32_t ___offset1, int32_t ___width2, String_t* ___str3, bool ___ignore4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.Text.RegularExpressions.Position)
extern "C"  void AnchorInfo__ctor_m3146766459 (AnchorInfo_t1997143859 * __this, Expression_t1499093192 * ___expr0, int32_t ___offset1, int32_t ___width2, uint16_t ___pos3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Offset()
extern "C"  int32_t AnchorInfo_get_Offset_m110301077 (AnchorInfo_t1997143859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Width()
extern "C"  int32_t AnchorInfo_get_Width_m814480998 (AnchorInfo_t1997143859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Length()
extern "C"  int32_t AnchorInfo_get_Length_m2802687272 (AnchorInfo_t1997143859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsUnknownWidth()
extern "C"  bool AnchorInfo_get_IsUnknownWidth_m3273649934 (AnchorInfo_t1997143859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsComplete()
extern "C"  bool AnchorInfo_get_IsComplete_m2840583659 (AnchorInfo_t1997143859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::get_Substring()
extern "C"  String_t* AnchorInfo_get_Substring_m1320966366 (AnchorInfo_t1997143859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IgnoreCase()
extern "C"  bool AnchorInfo_get_IgnoreCase_m843009482 (AnchorInfo_t1997143859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::get_Position()
extern "C"  uint16_t AnchorInfo_get_Position_m1033547864 (AnchorInfo_t1997143859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsSubstring()
extern "C"  bool AnchorInfo_get_IsSubstring_m506285889 (AnchorInfo_t1997143859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsPosition()
extern "C"  bool AnchorInfo_get_IsPosition_m467864027 (AnchorInfo_t1997143859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.AnchorInfo::GetInterval(System.Int32)
extern "C"  Interval_t63637216  AnchorInfo_GetInterval_m1447205988 (AnchorInfo_t1997143859 * __this, int32_t ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
