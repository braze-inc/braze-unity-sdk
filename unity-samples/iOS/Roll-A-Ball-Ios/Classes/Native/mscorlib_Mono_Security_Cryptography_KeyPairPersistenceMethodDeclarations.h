#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t1812;
// System.String
struct String_t;
// System.Security.Cryptography.CspParameters
struct CspParameters_t1510;

// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters)
 void KeyPairPersistence__ctor_m8716 (KeyPairPersistence_t1812 * __this, CspParameters_t1510 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters,System.String)
 void KeyPairPersistence__ctor_m8717 (KeyPairPersistence_t1812 * __this, CspParameters_t1510 * ___parameters, String_t* ___keyPair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.cctor()
 void KeyPairPersistence__cctor_m8718 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_Filename()
 String_t* KeyPairPersistence_get_Filename_m8719 (KeyPairPersistence_t1812 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_KeyValue()
 String_t* KeyPairPersistence_get_KeyValue_m8720 (KeyPairPersistence_t1812 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::set_KeyValue(System.String)
 void KeyPairPersistence_set_KeyValue_m8721 (KeyPairPersistence_t1812 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::Load()
 bool KeyPairPersistence_Load_m8722 (KeyPairPersistence_t1812 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Save()
 void KeyPairPersistence_Save_m8723 (KeyPairPersistence_t1812 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Remove()
 void KeyPairPersistence_Remove_m8724 (KeyPairPersistence_t1812 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_UserPath()
 String_t* KeyPairPersistence_get_UserPath_m8725 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_MachinePath()
 String_t* KeyPairPersistence_get_MachinePath_m8726 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_CanSecure(System.String)
 bool KeyPairPersistence__CanSecure_m8727 (Object_t * __this/* static, unused */, String_t* ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectUser(System.String)
 bool KeyPairPersistence__ProtectUser_m8728 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectMachine(System.String)
 bool KeyPairPersistence__ProtectMachine_m8729 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsUserProtected(System.String)
 bool KeyPairPersistence__IsUserProtected_m8730 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsMachineProtected(System.String)
 bool KeyPairPersistence__IsMachineProtected_m8731 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::CanSecure(System.String)
 bool KeyPairPersistence_CanSecure_m8732 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectUser(System.String)
 bool KeyPairPersistence_ProtectUser_m8733 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectMachine(System.String)
 bool KeyPairPersistence_ProtectMachine_m8734 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsUserProtected(System.String)
 bool KeyPairPersistence_IsUserProtected_m8735 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsMachineProtected(System.String)
 bool KeyPairPersistence_IsMachineProtected_m8736 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_CanChange()
 bool KeyPairPersistence_get_CanChange_m8737 (KeyPairPersistence_t1812 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseDefaultKeyContainer()
 bool KeyPairPersistence_get_UseDefaultKeyContainer_m8738 (KeyPairPersistence_t1812 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseMachineKeyStore()
 bool KeyPairPersistence_get_UseMachineKeyStore_m8739 (KeyPairPersistence_t1812 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_ContainerName()
 String_t* KeyPairPersistence_get_ContainerName_m8740 (KeyPairPersistence_t1812 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspParameters Mono.Security.Cryptography.KeyPairPersistence::Copy(System.Security.Cryptography.CspParameters)
 CspParameters_t1510 * KeyPairPersistence_Copy_m8741 (KeyPairPersistence_t1812 * __this, CspParameters_t1510 * ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::FromXml(System.String)
 void KeyPairPersistence_FromXml_m8742 (KeyPairPersistence_t1812 * __this, String_t* ___xml, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::ToXml()
 String_t* KeyPairPersistence_ToXml_m8743 (KeyPairPersistence_t1812 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
