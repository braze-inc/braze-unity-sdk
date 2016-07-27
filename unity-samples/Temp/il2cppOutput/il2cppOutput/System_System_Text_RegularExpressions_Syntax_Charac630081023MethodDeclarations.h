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

// System.Text.RegularExpressions.Syntax.CharacterClass
struct CharacterClass_t630081023;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t93500931;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Category3838697241.h"
#include "System_System_Text_RegularExpressions_Interval63637216.h"

// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Boolean,System.Boolean)
extern "C"  void CharacterClass__ctor_m318669623 (CharacterClass_t630081023 * __this, bool ___negate0, bool ___ignore1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Text.RegularExpressions.Category,System.Boolean)
extern "C"  void CharacterClass__ctor_m3672999653 (CharacterClass_t630081023 * __this, uint16_t ___cat0, bool ___negate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.cctor()
extern "C"  void CharacterClass__cctor_m2076983614 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCategory(System.Text.RegularExpressions.Category,System.Boolean)
extern "C"  void CharacterClass_AddCategory_m385157186 (CharacterClass_t630081023 * __this, uint16_t ___cat0, bool ___negate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCharacter(System.Char)
extern "C"  void CharacterClass_AddCharacter_m509912608 (CharacterClass_t630081023 * __this, uint16_t ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddRange(System.Char,System.Char)
extern "C"  void CharacterClass_AddRange_m4184687523 (CharacterClass_t630081023 * __this, uint16_t ___lo0, uint16_t ___hi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void CharacterClass_Compile_m3181047384 (CharacterClass_t630081023 * __this, Il2CppObject * ___cmp0, bool ___reverse1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::GetWidth(System.Int32&,System.Int32&)
extern "C"  void CharacterClass_GetWidth_m2016149227 (CharacterClass_t630081023 * __this, int32_t* ___min0, int32_t* ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::IsComplex()
extern "C"  bool CharacterClass_IsComplex_m3242686525 (CharacterClass_t630081023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Text.RegularExpressions.Syntax.CharacterClass::GetIntervalCost(System.Text.RegularExpressions.Interval)
extern "C"  double CharacterClass_GetIntervalCost_m3570544782 (Il2CppObject * __this /* static, unused */, Interval_t63637216  ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
