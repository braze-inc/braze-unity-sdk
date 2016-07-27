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

// System.String
struct String_t;
// System.Reflection.MethodBase
struct MethodBase_t3461000640;
// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t1882292308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_MethodBase3461000640.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_Assembly1882292308.h"

// System.Void System.Runtime.Remoting.SoapServices::.cctor()
extern "C"  void SoapServices__cctor_m3438713338 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.SoapServices::get_XmlNsForClrTypeWithAssembly()
extern "C"  String_t* SoapServices_get_XmlNsForClrTypeWithAssembly_m1233821831 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.SoapServices::get_XmlNsForClrTypeWithNs()
extern "C"  String_t* SoapServices_get_XmlNsForClrTypeWithNs_m2315111590 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.SoapServices::get_XmlNsForClrTypeWithNsAndAssembly()
extern "C"  String_t* SoapServices_get_XmlNsForClrTypeWithNsAndAssembly_m1138177465 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.SoapServices::CodeXmlNamespaceForClrTypeNamespace(System.String,System.String)
extern "C"  String_t* SoapServices_CodeXmlNamespaceForClrTypeNamespace_m3714871648 (Il2CppObject * __this /* static, unused */, String_t* ___typeNamespace0, String_t* ___assemblyName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.SoapServices::GetNameKey(System.String,System.String)
extern "C"  String_t* SoapServices_GetNameKey_m190008428 (Il2CppObject * __this /* static, unused */, String_t* ___name0, String_t* ___namspace1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.SoapServices::GetAssemblyName(System.Reflection.MethodBase)
extern "C"  String_t* SoapServices_GetAssemblyName_m2151150175 (Il2CppObject * __this /* static, unused */, MethodBase_t3461000640 * ___mb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.SoapServices::GetXmlElementForInteropType(System.Type,System.String&,System.String&)
extern "C"  bool SoapServices_GetXmlElementForInteropType_m694138433 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t** ___xmlElement1, String_t** ___xmlNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.SoapServices::GetXmlNamespaceForMethodCall(System.Reflection.MethodBase)
extern "C"  String_t* SoapServices_GetXmlNamespaceForMethodCall_m1539585932 (Il2CppObject * __this /* static, unused */, MethodBase_t3461000640 * ___mb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.SoapServices::GetXmlNamespaceForMethodResponse(System.Reflection.MethodBase)
extern "C"  String_t* SoapServices_GetXmlNamespaceForMethodResponse_m1087154351 (Il2CppObject * __this /* static, unused */, MethodBase_t3461000640 * ___mb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.SoapServices::GetXmlTypeForInteropType(System.Type,System.String&,System.String&)
extern "C"  bool SoapServices_GetXmlTypeForInteropType_m433232637 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t** ___xmlType1, String_t** ___xmlTypeNamespace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.SoapServices::PreLoad(System.Reflection.Assembly)
extern "C"  void SoapServices_PreLoad_m4092312816 (Il2CppObject * __this /* static, unused */, Assembly_t1882292308 * ___assembly0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.SoapServices::PreLoad(System.Type)
extern "C"  void SoapServices_PreLoad_m2947375647 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.SoapServices::RegisterInteropXmlElement(System.String,System.String,System.Type)
extern "C"  void SoapServices_RegisterInteropXmlElement_m3512159329 (Il2CppObject * __this /* static, unused */, String_t* ___xmlElement0, String_t* ___xmlNamespace1, Type_t * ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.SoapServices::RegisterInteropXmlType(System.String,System.String,System.Type)
extern "C"  void SoapServices_RegisterInteropXmlType_m43028713 (Il2CppObject * __this /* static, unused */, String_t* ___xmlType0, String_t* ___xmlTypeNamespace1, Type_t * ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.SoapServices::EncodeNs(System.String)
extern "C"  String_t* SoapServices_EncodeNs_m2474727155 (Il2CppObject * __this /* static, unused */, String_t* ___ns0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
