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

// Appboy.Utilities.JSONLazyCreator
struct JSONLazyCreator_t26095533;
// Appboy.Utilities.JSONNode
struct JSONNode_t1834608295;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// Appboy.Utilities.JSONArray
struct JSONArray_t437780974;
// Appboy.Utilities.JSONClass
struct JSONClass_t439433485;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Utilities_JSO1834608295.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Utilities_JSONL26095533.h"

// System.Void Appboy.Utilities.JSONLazyCreator::.ctor(Appboy.Utilities.JSONNode)
extern "C"  void JSONLazyCreator__ctor_m3184081531 (JSONLazyCreator_t26095533 * __this, JSONNode_t1834608295 * ___aNode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::.ctor(Appboy.Utilities.JSONNode,System.String)
extern "C"  void JSONLazyCreator__ctor_m1560342391 (JSONLazyCreator_t26095533 * __this, JSONNode_t1834608295 * ___aNode0, String_t* ___aKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::Set(Appboy.Utilities.JSONNode)
extern "C"  void JSONLazyCreator_Set_m1497685179 (JSONLazyCreator_t26095533 * __this, JSONNode_t1834608295 * ___aVal0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONLazyCreator::get_Item(System.Int32)
extern "C"  JSONNode_t1834608295 * JSONLazyCreator_get_Item_m771988621 (JSONLazyCreator_t26095533 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::set_Item(System.Int32,Appboy.Utilities.JSONNode)
extern "C"  void JSONLazyCreator_set_Item_m2808893530 (JSONLazyCreator_t26095533 * __this, int32_t ___aIndex0, JSONNode_t1834608295 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONLazyCreator::get_Item(System.String)
extern "C"  JSONNode_t1834608295 * JSONLazyCreator_get_Item_m2913509190 (JSONLazyCreator_t26095533 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::set_Item(System.String,Appboy.Utilities.JSONNode)
extern "C"  void JSONLazyCreator_set_Item_m331198639 (JSONLazyCreator_t26095533 * __this, String_t* ___aKey0, JSONNode_t1834608295 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::Add(Appboy.Utilities.JSONNode)
extern "C"  void JSONLazyCreator_Add_m381710620 (JSONLazyCreator_t26095533 * __this, JSONNode_t1834608295 * ___aItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::Add(System.String,Appboy.Utilities.JSONNode)
extern "C"  void JSONLazyCreator_Add_m4191068312 (JSONLazyCreator_t26095533 * __this, String_t* ___aKey0, JSONNode_t1834608295 * ___aItem1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONLazyCreator::Equals(System.Object)
extern "C"  bool JSONLazyCreator_Equals_m3198391483 (JSONLazyCreator_t26095533 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONLazyCreator::GetHashCode()
extern "C"  int32_t JSONLazyCreator_GetHashCode_m3807281631 (JSONLazyCreator_t26095533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONLazyCreator::ToString()
extern "C"  String_t* JSONLazyCreator_ToString_m4044899757 (JSONLazyCreator_t26095533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONLazyCreator::ToString(System.String)
extern "C"  String_t* JSONLazyCreator_ToString_m3598891637 (JSONLazyCreator_t26095533 * __this, String_t* ___aPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONLazyCreator::get_AsInt()
extern "C"  int32_t JSONLazyCreator_get_AsInt_m116183810 (JSONLazyCreator_t26095533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::set_AsInt(System.Int32)
extern "C"  void JSONLazyCreator_set_AsInt_m3971561877 (JSONLazyCreator_t26095533 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Appboy.Utilities.JSONLazyCreator::get_AsFloat()
extern "C"  float JSONLazyCreator_get_AsFloat_m1236430617 (JSONLazyCreator_t26095533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::set_AsFloat(System.Single)
extern "C"  void JSONLazyCreator_set_AsFloat_m247498970 (JSONLazyCreator_t26095533 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Appboy.Utilities.JSONLazyCreator::get_AsDouble()
extern "C"  double JSONLazyCreator_get_AsDouble_m3991406829 (JSONLazyCreator_t26095533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::set_AsDouble(System.Double)
extern "C"  void JSONLazyCreator_set_AsDouble_m372698372 (JSONLazyCreator_t26095533 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONLazyCreator::get_AsBool()
extern "C"  bool JSONLazyCreator_get_AsBool_m303820543 (JSONLazyCreator_t26095533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::set_AsBool(System.Boolean)
extern "C"  void JSONLazyCreator_set_AsBool_m3314603022 (JSONLazyCreator_t26095533 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONArray Appboy.Utilities.JSONLazyCreator::get_AsArray()
extern "C"  JSONArray_t437780974 * JSONLazyCreator_get_AsArray_m2872895527 (JSONLazyCreator_t26095533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONClass Appboy.Utilities.JSONLazyCreator::get_AsObject()
extern "C"  JSONClass_t439433485 * JSONLazyCreator_get_AsObject_m4263008724 (JSONLazyCreator_t26095533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONLazyCreator::op_Equality(Appboy.Utilities.JSONLazyCreator,System.Object)
extern "C"  bool JSONLazyCreator_op_Equality_m210557605 (Il2CppObject * __this /* static, unused */, JSONLazyCreator_t26095533 * ___a0, Il2CppObject * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONLazyCreator::op_Inequality(Appboy.Utilities.JSONLazyCreator,System.Object)
extern "C"  bool JSONLazyCreator_op_Inequality_m1628198794 (Il2CppObject * __this /* static, unused */, JSONLazyCreator_t26095533 * ___a0, Il2CppObject * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
