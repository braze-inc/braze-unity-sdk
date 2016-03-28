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

// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2776331335;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1640433287;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3468179849;
// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t2591465257;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.String
struct String_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Runtime_Serialization_BaseFixupRec2591465257.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_Runtime_Serialization_ObjectRecord3468179849.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"

// System.Void System.Runtime.Serialization.ObjectManager::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C"  void ObjectManager__ctor_m2952664102 (ObjectManager_t2776331335 * __this, Il2CppObject * ___selector, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::DoFixups()
extern "C"  void ObjectManager_DoFixups_m109839835 (ObjectManager_t2776331335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::GetObjectRecord(System.Int64)
extern "C"  ObjectRecord_t3468179849 * ObjectManager_GetObjectRecord_m2090112317 (ObjectManager_t2776331335 * __this, int64_t ___objectID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.ObjectManager::GetObject(System.Int64)
extern "C"  Il2CppObject * ObjectManager_GetObject_m3336105927 (ObjectManager_t2776331335 * __this, int64_t ___objectID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseDeserializationEvent()
extern "C"  void ObjectManager_RaiseDeserializationEvent_m4065308332 (ObjectManager_t2776331335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializingEvent(System.Object)
extern "C"  void ObjectManager_RaiseOnDeserializingEvent_m2769114934 (ObjectManager_t2776331335 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializedEvent(System.Object)
extern "C"  void ObjectManager_RaiseOnDeserializedEvent_m3868580957 (ObjectManager_t2776331335 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::AddFixup(System.Runtime.Serialization.BaseFixupRecord)
extern "C"  void ObjectManager_AddFixup_m470602911 (ObjectManager_t2776331335 * __this, BaseFixupRecord_t2591465257 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32,System.Int64)
extern "C"  void ObjectManager_RecordArrayElementFixup_m2718232708 (ObjectManager_t2776331335 * __this, int64_t ___arrayToBeFixed, int32_t ___index, int64_t ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32[],System.Int64)
extern "C"  void ObjectManager_RecordArrayElementFixup_m1349242662 (ObjectManager_t2776331335 * __this, int64_t ___arrayToBeFixed, Int32U5BU5D_t1809983122* ___indices, int64_t ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordDelayedFixup(System.Int64,System.String,System.Int64)
extern "C"  void ObjectManager_RecordDelayedFixup_m3667857086 (ObjectManager_t2776331335 * __this, int64_t ___objectToBeFixed, String_t* ___memberName, int64_t ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64)
extern "C"  void ObjectManager_RecordFixup_m542439812 (ObjectManager_t2776331335 * __this, int64_t ___objectToBeFixed, MemberInfo_t * ___member, int64_t ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObjectInternal(System.Object,System.Runtime.Serialization.ObjectRecord)
extern "C"  void ObjectManager_RegisterObjectInternal_m1270172209 (ObjectManager_t2776331335 * __this, Il2CppObject * ___obj, ObjectRecord_t3468179849 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObject(System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
extern "C"  void ObjectManager_RegisterObject_m2067765899 (ObjectManager_t2776331335 * __this, Il2CppObject * ___obj, int64_t ___objectID, SerializationInfo_t2995724695 * ___info, int64_t ___idOfContainingObj, MemberInfo_t * ___member, Int32U5BU5D_t1809983122* ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
