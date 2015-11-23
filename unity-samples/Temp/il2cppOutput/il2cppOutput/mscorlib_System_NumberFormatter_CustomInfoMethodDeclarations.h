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

// System.NumberFormatter/CustomInfo
struct CustomInfo_t2015;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1539;
// System.Text.StringBuilder
struct StringBuilder_t82;

#include "codegen/il2cpp-codegen.h"

// System.Void System.NumberFormatter/CustomInfo::.ctor()
extern "C" void CustomInfo__ctor_m12133 (CustomInfo_t2015 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter/CustomInfo::GetActiveSection(System.String,System.Boolean&,System.Boolean,System.Int32&,System.Int32&)
extern "C" void CustomInfo_GetActiveSection_m12134 (Object_t * __this /* static, unused */, String_t* ___format, bool* ___positive, bool ___zero, int32_t* ___offset, int32_t* ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter/CustomInfo System.NumberFormatter/CustomInfo::Parse(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo)
extern "C" CustomInfo_t2015 * CustomInfo_Parse_m12135 (Object_t * __this /* static, unused */, String_t* ___format, int32_t ___offset, int32_t ___length, NumberFormatInfo_t1539 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter/CustomInfo::Format(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo,System.Boolean,System.Text.StringBuilder,System.Text.StringBuilder,System.Text.StringBuilder)
extern "C" String_t* CustomInfo_Format_m12136 (CustomInfo_t2015 * __this, String_t* ___format, int32_t ___offset, int32_t ___length, NumberFormatInfo_t1539 * ___nfi, bool ___positive, StringBuilder_t82 * ___sb_int, StringBuilder_t82 * ___sb_dec, StringBuilder_t82 * ___sb_exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
