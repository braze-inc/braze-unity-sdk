#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Appboy.Utilities.JSONLazyCreator
struct JSONLazyCreator_t40;
// Appboy.Utilities.JSONNode
struct JSONNode_t19;
// System.String
struct String_t;
// Appboy.Utilities.JSONArray
struct JSONArray_t25;
// Appboy.Utilities.JSONClass
struct JSONClass_t17;
// System.Object
struct Object_t;

// System.Void Appboy.Utilities.JSONLazyCreator::.ctor(Appboy.Utilities.JSONNode)
 void JSONLazyCreator__ctor_m236 (JSONLazyCreator_t40 * __this, JSONNode_t19 * ___aNode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::.ctor(Appboy.Utilities.JSONNode,System.String)
 void JSONLazyCreator__ctor_m237 (JSONLazyCreator_t40 * __this, JSONNode_t19 * ___aNode, String_t* ___aKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::Set(Appboy.Utilities.JSONNode)
 void JSONLazyCreator_Set_m238 (JSONLazyCreator_t40 * __this, JSONNode_t19 * ___aVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONLazyCreator::get_Item(System.Int32)
 JSONNode_t19 * JSONLazyCreator_get_Item_m239 (JSONLazyCreator_t40 * __this, int32_t ___aIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::set_Item(System.Int32,Appboy.Utilities.JSONNode)
 void JSONLazyCreator_set_Item_m240 (JSONLazyCreator_t40 * __this, int32_t ___aIndex, JSONNode_t19 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONLazyCreator::get_Item(System.String)
 JSONNode_t19 * JSONLazyCreator_get_Item_m241 (JSONLazyCreator_t40 * __this, String_t* ___aKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::set_Item(System.String,Appboy.Utilities.JSONNode)
 void JSONLazyCreator_set_Item_m242 (JSONLazyCreator_t40 * __this, String_t* ___aKey, JSONNode_t19 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::Add(Appboy.Utilities.JSONNode)
 void JSONLazyCreator_Add_m243 (JSONLazyCreator_t40 * __this, JSONNode_t19 * ___aItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::Add(System.String,Appboy.Utilities.JSONNode)
 void JSONLazyCreator_Add_m244 (JSONLazyCreator_t40 * __this, String_t* ___aKey, JSONNode_t19 * ___aItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONLazyCreator::Equals(System.Object)
 bool JSONLazyCreator_Equals_m245 (JSONLazyCreator_t40 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONLazyCreator::GetHashCode()
 int32_t JSONLazyCreator_GetHashCode_m246 (JSONLazyCreator_t40 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONLazyCreator::ToString()
 String_t* JSONLazyCreator_ToString_m247 (JSONLazyCreator_t40 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONLazyCreator::ToString(System.String)
 String_t* JSONLazyCreator_ToString_m248 (JSONLazyCreator_t40 * __this, String_t* ___aPrefix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONLazyCreator::get_AsInt()
 int32_t JSONLazyCreator_get_AsInt_m249 (JSONLazyCreator_t40 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::set_AsInt(System.Int32)
 void JSONLazyCreator_set_AsInt_m250 (JSONLazyCreator_t40 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Appboy.Utilities.JSONLazyCreator::get_AsFloat()
 float JSONLazyCreator_get_AsFloat_m251 (JSONLazyCreator_t40 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::set_AsFloat(System.Single)
 void JSONLazyCreator_set_AsFloat_m252 (JSONLazyCreator_t40 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Appboy.Utilities.JSONLazyCreator::get_AsDouble()
 double JSONLazyCreator_get_AsDouble_m253 (JSONLazyCreator_t40 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::set_AsDouble(System.Double)
 void JSONLazyCreator_set_AsDouble_m254 (JSONLazyCreator_t40 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONLazyCreator::get_AsBool()
 bool JSONLazyCreator_get_AsBool_m255 (JSONLazyCreator_t40 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::set_AsBool(System.Boolean)
 void JSONLazyCreator_set_AsBool_m256 (JSONLazyCreator_t40 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONArray Appboy.Utilities.JSONLazyCreator::get_AsArray()
 JSONArray_t25 * JSONLazyCreator_get_AsArray_m257 (JSONLazyCreator_t40 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONClass Appboy.Utilities.JSONLazyCreator::get_AsObject()
 JSONClass_t17 * JSONLazyCreator_get_AsObject_m258 (JSONLazyCreator_t40 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONLazyCreator::op_Equality(Appboy.Utilities.JSONLazyCreator,System.Object)
 bool JSONLazyCreator_op_Equality_m259 (Object_t * __this/* static, unused */, JSONLazyCreator_t40 * ___a, Object_t * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONLazyCreator::op_Inequality(Appboy.Utilities.JSONLazyCreator,System.Object)
 bool JSONLazyCreator_op_Inequality_m260 (Object_t * __this/* static, unused */, JSONLazyCreator_t40 * ___a, Object_t * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
