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

// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled_pinvoke;
// UnityEngine.Object[]
struct ObjectU5BU5D_t3051965477;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Object3878351788.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_HideFlags62234258.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void UnityEngine.Object::.ctor()
extern "C"  void Object__ctor_m570634126 (Object_t3878351788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern "C"  Object_t3878351788 * Object_Internal_CloneSingle_m3129073756 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Object_t3878351788 * Object_Internal_InstantiateSingle_m3047563925 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___data, Vector3_t3525329789  ___pos, Quaternion_t1891715979  ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  Object_t3878351788 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m1201424140 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___data, Vector3_t3525329789 * ___pos, Quaternion_t1891715979 * ___rot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C"  void Object_Destroy_m2260435093 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___obj, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m176400816 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C"  void Object_DestroyImmediate_m1826427014 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___obj, bool ___allowDestroyingAssets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C"  void Object_DestroyImmediate_m349958679 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C"  ObjectU5BU5D_t3051965477* Object_FindObjectsOfType_m975740280 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m3709440845 (Object_t3878351788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C"  void Object_set_name_m1123518500 (Object_t3878351788 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m4064482788 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
extern "C"  int32_t Object_get_hideFlags_m1893459363 (Object_t3878351788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C"  void Object_set_hideFlags_m41317712 (Object_t3878351788 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)
extern "C"  void Object_DestroyObject_m3324336244 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___obj, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyObject(UnityEngine.Object)
extern "C"  void Object_DestroyObject_m3900253135 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindSceneObjectsOfType(System.Type)
extern "C"  ObjectU5BU5D_t3051965477* Object_FindSceneObjectsOfType_m2168852346 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfTypeIncludingAssets(System.Type)
extern "C"  ObjectU5BU5D_t3051965477* Object_FindObjectsOfTypeIncludingAssets_m1276784656 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::ToString()
extern "C"  String_t* Object_ToString_m2155033093 (Object_t3878351788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::DoesObjectWithInstanceIDExist(System.Int32)
extern "C"  bool Object_DoesObjectWithInstanceIDExist_m3762691104 (Il2CppObject * __this /* static, unused */, int32_t ___instanceID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern "C"  bool Object_Equals_m1697651929 (Object_t3878351788 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C"  int32_t Object_GetHashCode_m1758859581 (Object_t3878351788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_CompareBaseObjects_m2625210252 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___lhs, Object_t3878351788 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern "C"  bool Object_IsNativeObjectAlive_m434626365 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C"  int32_t Object_GetInstanceID_m200424466 (Object_t3878351788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C"  IntPtr_t Object_GetCachedPtr_m1583421857 (Object_t3878351788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Object_t3878351788 * Object_Instantiate_m2255090103 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___original, Vector3_t3525329789  ___position, Quaternion_t1891715979  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
extern "C"  Object_t3878351788 * Object_Instantiate_m3040600263 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___original, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern "C"  void Object_CheckNullArgument_m264735768 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___arg, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern "C"  Object_t3878351788 * Object_FindObjectOfType_m3820159265 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m2106766291 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___exists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m3964590952 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___x, Object_t3878351788 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m1296218211 (Il2CppObject * __this /* static, unused */, Object_t3878351788 * ___x, Object_t3878351788 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Object_t3878351788;
struct Object_t3878351788_marshaled_pinvoke;

extern "C" void Object_t3878351788_marshal_pinvoke(const Object_t3878351788& unmarshaled, Object_t3878351788_marshaled_pinvoke& marshaled);
extern "C" void Object_t3878351788_marshal_pinvoke_back(const Object_t3878351788_marshaled_pinvoke& marshaled, Object_t3878351788& unmarshaled);
extern "C" void Object_t3878351788_marshal_pinvoke_cleanup(Object_t3878351788_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Object_t3878351788;
struct Object_t3878351788_marshaled_com;

extern "C" void Object_t3878351788_marshal_com(const Object_t3878351788& unmarshaled, Object_t3878351788_marshaled_com& marshaled);
extern "C" void Object_t3878351788_marshal_com_back(const Object_t3878351788_marshaled_com& marshaled, Object_t3878351788& unmarshaled);
extern "C" void Object_t3878351788_marshal_com_cleanup(Object_t3878351788_marshaled_com& marshaled);
