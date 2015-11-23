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
struct JSONLazyCreator_t27;
// Appboy.Utilities.JSONNode
struct JSONNode_t11;
// System.String
struct String_t;
// System.Object
struct Object_t;
// Appboy.Utilities.JSONArray
struct JSONArray_t16;
// Appboy.Utilities.JSONClass
struct JSONClass_t22;

#include "codegen/il2cpp-codegen.h"

// System.Void Appboy.Utilities.JSONLazyCreator::.ctor(Appboy.Utilities.JSONNode)
extern "C" void JSONLazyCreator__ctor_m237 (JSONLazyCreator_t27 * __this, JSONNode_t11 * ___aNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::.ctor(Appboy.Utilities.JSONNode,System.String)
extern "C" void JSONLazyCreator__ctor_m238 (JSONLazyCreator_t27 * __this, JSONNode_t11 * ___aNode, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::Set(Appboy.Utilities.JSONNode)
extern "C" void JSONLazyCreator_Set_m239 (JSONLazyCreator_t27 * __this, JSONNode_t11 * ___aVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONLazyCreator::get_Item(System.Int32)
extern "C" JSONNode_t11 * JSONLazyCreator_get_Item_m240 (JSONLazyCreator_t27 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::set_Item(System.Int32,Appboy.Utilities.JSONNode)
extern "C" void JSONLazyCreator_set_Item_m241 (JSONLazyCreator_t27 * __this, int32_t ___aIndex, JSONNode_t11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONLazyCreator::get_Item(System.String)
extern "C" JSONNode_t11 * JSONLazyCreator_get_Item_m242 (JSONLazyCreator_t27 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::set_Item(System.String,Appboy.Utilities.JSONNode)
extern "C" void JSONLazyCreator_set_Item_m243 (JSONLazyCreator_t27 * __this, String_t* ___aKey, JSONNode_t11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::Add(Appboy.Utilities.JSONNode)
extern "C" void JSONLazyCreator_Add_m244 (JSONLazyCreator_t27 * __this, JSONNode_t11 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::Add(System.String,Appboy.Utilities.JSONNode)
extern "C" void JSONLazyCreator_Add_m245 (JSONLazyCreator_t27 * __this, String_t* ___aKey, JSONNode_t11 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONLazyCreator::Equals(System.Object)
extern "C" bool JSONLazyCreator_Equals_m246 (JSONLazyCreator_t27 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONLazyCreator::GetHashCode()
extern "C" int32_t JSONLazyCreator_GetHashCode_m247 (JSONLazyCreator_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONLazyCreator::ToString()
extern "C" String_t* JSONLazyCreator_ToString_m248 (JSONLazyCreator_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONLazyCreator::ToString(System.String)
extern "C" String_t* JSONLazyCreator_ToString_m249 (JSONLazyCreator_t27 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONLazyCreator::get_AsInt()
extern "C" int32_t JSONLazyCreator_get_AsInt_m250 (JSONLazyCreator_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::set_AsInt(System.Int32)
extern "C" void JSONLazyCreator_set_AsInt_m251 (JSONLazyCreator_t27 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Appboy.Utilities.JSONLazyCreator::get_AsFloat()
extern "C" float JSONLazyCreator_get_AsFloat_m252 (JSONLazyCreator_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::set_AsFloat(System.Single)
extern "C" void JSONLazyCreator_set_AsFloat_m253 (JSONLazyCreator_t27 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Appboy.Utilities.JSONLazyCreator::get_AsDouble()
extern "C" double JSONLazyCreator_get_AsDouble_m254 (JSONLazyCreator_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::set_AsDouble(System.Double)
extern "C" void JSONLazyCreator_set_AsDouble_m255 (JSONLazyCreator_t27 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONLazyCreator::get_AsBool()
extern "C" bool JSONLazyCreator_get_AsBool_m256 (JSONLazyCreator_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONLazyCreator::set_AsBool(System.Boolean)
extern "C" void JSONLazyCreator_set_AsBool_m257 (JSONLazyCreator_t27 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONArray Appboy.Utilities.JSONLazyCreator::get_AsArray()
extern "C" JSONArray_t16 * JSONLazyCreator_get_AsArray_m258 (JSONLazyCreator_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONClass Appboy.Utilities.JSONLazyCreator::get_AsObject()
extern "C" JSONClass_t22 * JSONLazyCreator_get_AsObject_m259 (JSONLazyCreator_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONLazyCreator::op_Equality(Appboy.Utilities.JSONLazyCreator,System.Object)
extern "C" bool JSONLazyCreator_op_Equality_m260 (Object_t * __this /* static, unused */, JSONLazyCreator_t27 * ___a, Object_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONLazyCreator::op_Inequality(Appboy.Utilities.JSONLazyCreator,System.Object)
extern "C" bool JSONLazyCreator_op_Inequality_m261 (Object_t * __this /* static, unused */, JSONLazyCreator_t27 * ___a, Object_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
