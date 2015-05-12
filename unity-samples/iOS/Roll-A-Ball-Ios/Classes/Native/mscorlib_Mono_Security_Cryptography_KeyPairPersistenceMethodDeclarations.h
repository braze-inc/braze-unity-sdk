#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t1824;
// System.String
struct String_t;
// System.Security.Cryptography.CspParameters
struct CspParameters_t1521;

// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters)
 void KeyPairPersistence__ctor_m8811 (KeyPairPersistence_t1824 * __this, CspParameters_t1521 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters,System.String)
 void KeyPairPersistence__ctor_m8812 (KeyPairPersistence_t1824 * __this, CspParameters_t1521 * ___parameters, String_t* ___keyPair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.cctor()
 void KeyPairPersistence__cctor_m8813 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_Filename()
 String_t* KeyPairPersistence_get_Filename_m8814 (KeyPairPersistence_t1824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_KeyValue()
 String_t* KeyPairPersistence_get_KeyValue_m8815 (KeyPairPersistence_t1824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::set_KeyValue(System.String)
 void KeyPairPersistence_set_KeyValue_m8816 (KeyPairPersistence_t1824 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::Load()
 bool KeyPairPersistence_Load_m8817 (KeyPairPersistence_t1824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Save()
 void KeyPairPersistence_Save_m8818 (KeyPairPersistence_t1824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Remove()
 void KeyPairPersistence_Remove_m8819 (KeyPairPersistence_t1824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_UserPath()
 String_t* KeyPairPersistence_get_UserPath_m8820 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_MachinePath()
 String_t* KeyPairPersistence_get_MachinePath_m8821 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_CanSecure(System.String)
 bool KeyPairPersistence__CanSecure_m8822 (Object_t * __this/* static, unused */, String_t* ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectUser(System.String)
 bool KeyPairPersistence__ProtectUser_m8823 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectMachine(System.String)
 bool KeyPairPersistence__ProtectMachine_m8824 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsUserProtected(System.String)
 bool KeyPairPersistence__IsUserProtected_m8825 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsMachineProtected(System.String)
 bool KeyPairPersistence__IsMachineProtected_m8826 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::CanSecure(System.String)
 bool KeyPairPersistence_CanSecure_m8827 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectUser(System.String)
 bool KeyPairPersistence_ProtectUser_m8828 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectMachine(System.String)
 bool KeyPairPersistence_ProtectMachine_m8829 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsUserProtected(System.String)
 bool KeyPairPersistence_IsUserProtected_m8830 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsMachineProtected(System.String)
 bool KeyPairPersistence_IsMachineProtected_m8831 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_CanChange()
 bool KeyPairPersistence_get_CanChange_m8832 (KeyPairPersistence_t1824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseDefaultKeyContainer()
 bool KeyPairPersistence_get_UseDefaultKeyContainer_m8833 (KeyPairPersistence_t1824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseMachineKeyStore()
 bool KeyPairPersistence_get_UseMachineKeyStore_m8834 (KeyPairPersistence_t1824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_ContainerName()
 String_t* KeyPairPersistence_get_ContainerName_m8835 (KeyPairPersistence_t1824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspParameters Mono.Security.Cryptography.KeyPairPersistence::Copy(System.Security.Cryptography.CspParameters)
 CspParameters_t1521 * KeyPairPersistence_Copy_m8836 (KeyPairPersistence_t1824 * __this, CspParameters_t1521 * ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::FromXml(System.String)
 void KeyPairPersistence_FromXml_m8837 (KeyPairPersistence_t1824 * __this, String_t* ___xml, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::ToXml()
 String_t* KeyPairPersistence_ToXml_m8838 (KeyPairPersistence_t1824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
