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

// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t3887392091;
// System.Security.Cryptography.CspParameters
struct CspParameters_t4096074019;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_CspParameter4096074019.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters)
extern "C"  void KeyPairPersistence__ctor_m4074919992 (KeyPairPersistence_t3887392091 * __this, CspParameters_t4096074019 * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters,System.String)
extern "C"  void KeyPairPersistence__ctor_m1684061812 (KeyPairPersistence_t3887392091 * __this, CspParameters_t4096074019 * ___parameters0, String_t* ___keyPair1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.cctor()
extern "C"  void KeyPairPersistence__cctor_m487272190 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_Filename()
extern "C"  String_t* KeyPairPersistence_get_Filename_m2155113634 (KeyPairPersistence_t3887392091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_KeyValue()
extern "C"  String_t* KeyPairPersistence_get_KeyValue_m204692013 (KeyPairPersistence_t3887392091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::set_KeyValue(System.String)
extern "C"  void KeyPairPersistence_set_KeyValue_m2790955742 (KeyPairPersistence_t3887392091 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::Load()
extern "C"  bool KeyPairPersistence_Load_m625005177 (KeyPairPersistence_t3887392091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Save()
extern "C"  void KeyPairPersistence_Save_m870778642 (KeyPairPersistence_t3887392091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Remove()
extern "C"  void KeyPairPersistence_Remove_m860812121 (KeyPairPersistence_t3887392091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_UserPath()
extern "C"  String_t* KeyPairPersistence_get_UserPath_m1086915307 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_MachinePath()
extern "C"  String_t* KeyPairPersistence_get_MachinePath_m4003471731 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_CanSecure(System.String)
extern "C"  bool KeyPairPersistence__CanSecure_m255016359 (Il2CppObject * __this /* static, unused */, String_t* ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectUser(System.String)
extern "C"  bool KeyPairPersistence__ProtectUser_m3671478836 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectMachine(System.String)
extern "C"  bool KeyPairPersistence__ProtectMachine_m1278598652 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsUserProtected(System.String)
extern "C"  bool KeyPairPersistence__IsUserProtected_m2378307061 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsMachineProtected(System.String)
extern "C"  bool KeyPairPersistence__IsMachineProtected_m4266693987 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::CanSecure(System.String)
extern "C"  bool KeyPairPersistence_CanSecure_m4211984108 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectUser(System.String)
extern "C"  bool KeyPairPersistence_ProtectUser_m976461369 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectMachine(System.String)
extern "C"  bool KeyPairPersistence_ProtectMachine_m4131870679 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsUserProtected(System.String)
extern "C"  bool KeyPairPersistence_IsUserProtected_m635426682 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsMachineProtected(System.String)
extern "C"  bool KeyPairPersistence_IsMachineProtected_m3976964542 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_CanChange()
extern "C"  bool KeyPairPersistence_get_CanChange_m3754956646 (KeyPairPersistence_t3887392091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseDefaultKeyContainer()
extern "C"  bool KeyPairPersistence_get_UseDefaultKeyContainer_m1048698904 (KeyPairPersistence_t3887392091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseMachineKeyStore()
extern "C"  bool KeyPairPersistence_get_UseMachineKeyStore_m2900159998 (KeyPairPersistence_t3887392091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_ContainerName()
extern "C"  String_t* KeyPairPersistence_get_ContainerName_m3424430483 (KeyPairPersistence_t3887392091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspParameters Mono.Security.Cryptography.KeyPairPersistence::Copy(System.Security.Cryptography.CspParameters)
extern "C"  CspParameters_t4096074019 * KeyPairPersistence_Copy_m2616974335 (KeyPairPersistence_t3887392091 * __this, CspParameters_t4096074019 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::FromXml(System.String)
extern "C"  void KeyPairPersistence_FromXml_m1868637128 (KeyPairPersistence_t3887392091 * __this, String_t* ___xml0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::ToXml()
extern "C"  String_t* KeyPairPersistence_ToXml_m2810455020 (KeyPairPersistence_t3887392091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
