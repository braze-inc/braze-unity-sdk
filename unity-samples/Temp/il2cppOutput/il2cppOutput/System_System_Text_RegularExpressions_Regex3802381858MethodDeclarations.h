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

// System.Text.RegularExpressions.Regex
struct Regex_t3802381858;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t1224363367;
// System.Text.RegularExpressions.Match
struct Match_t3797657504;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t318449694;
// System.Text.RegularExpressions.IMachine
struct IMachine_t294675897;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Text_RegularExpressions_RegexOptions2783621746.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.Text.RegularExpressions.Regex::.ctor()
extern "C"  void Regex__ctor_m523653122 (Regex_t3802381858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern "C"  void Regex__ctor_m2980635200 (Regex_t3802381858 * __this, String_t* ___pattern0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C"  void Regex__ctor_m2068483208 (Regex_t3802381858 * __this, String_t* ___pattern0, int32_t ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Regex__ctor_m1618790979 (Regex_t3802381858 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.cctor()
extern "C"  void Regex__cctor_m2866248683 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Regex_System_Runtime_Serialization_ISerializable_GetObjectData_m522480713 (Regex_t3802381858 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String)
extern "C"  bool Regex_IsMatch_m1050731161 (Il2CppObject * __this /* static, unused */, String_t* ___input0, String_t* ___pattern1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String,System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Regex_IsMatch_m908471137 (Il2CppObject * __this /* static, unused */, String_t* ___input0, String_t* ___pattern1, int32_t ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::validate_options(System.Text.RegularExpressions.RegexOptions)
extern "C"  void Regex_validate_options_m625353623 (Il2CppObject * __this /* static, unused */, int32_t ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::Init()
extern "C"  void Regex_Init_m938259986 (Regex_t3802381858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::InitNewRegex()
extern "C"  void Regex_InitNewRegex_m2419508729 (Regex_t3802381858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::CreateMachineFactory(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C"  Il2CppObject * Regex_CreateMachineFactory_m2347116393 (Il2CppObject * __this /* static, unused */, String_t* ___pattern0, int32_t ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::get_Options()
extern "C"  int32_t Regex_get_Options_m3928047814 (Regex_t3802381858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::get_RightToLeft()
extern "C"  bool Regex_get_RightToLeft_m3494755007 (Regex_t3802381858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::GetGroupIndex(System.Int32)
extern "C"  int32_t Regex_GetGroupIndex_m547759882 (Regex_t3802381858 * __this, int32_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::default_startat(System.String)
extern "C"  int32_t Regex_default_startat_m996366267 (Regex_t3802381858 * __this, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
extern "C"  bool Regex_IsMatch_m2967892253 (Regex_t3802381858 * __this, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.Int32)
extern "C"  bool Regex_IsMatch_m3759940314 (Regex_t3802381858 * __this, String_t* ___input0, int32_t ___startat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.Int32)
extern "C"  Match_t3797657504 * Regex_Match_m1021969427 (Regex_t3802381858 * __this, String_t* ___input0, int32_t ___startat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String)
extern "C"  MatchCollection_t318449694 * Regex_Matches_m3092142232 (Regex_t3802381858 * __this, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.Int32)
extern "C"  MatchCollection_t318449694 * Regex_Matches_m4271078207 (Regex_t3802381858 * __this, String_t* ___input0, int32_t ___startat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::ToString()
extern "C"  String_t* Regex_ToString_m3480281169 (Regex_t3802381858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::get_Gap()
extern "C"  int32_t Regex_get_Gap_m2153899613 (Regex_t3802381858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Regex::CreateMachine()
extern "C"  Il2CppObject * Regex_CreateMachine_m1572823491 (Regex_t3802381858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::GetGroupNamesArray(System.Int32,System.Collections.IDictionary)
extern "C"  StringU5BU5D_t2956870243* Regex_GetGroupNamesArray_m3739926801 (Il2CppObject * __this /* static, unused */, int32_t ___groupCount0, Il2CppObject * ___mapping1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Text.RegularExpressions.Regex::get_GroupNumbers()
extern "C"  Int32U5BU5D_t1809983122* Regex_get_GroupNumbers_m2500558052 (Regex_t3802381858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
