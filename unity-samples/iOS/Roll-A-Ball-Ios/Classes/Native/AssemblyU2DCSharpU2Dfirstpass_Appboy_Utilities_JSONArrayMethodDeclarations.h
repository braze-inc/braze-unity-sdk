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

// Appboy.Utilities.JSONArray
struct JSONArray_t16;
// Appboy.Utilities.JSONNode
struct JSONNode_t11;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Appboy.Utilities.JSONNode>
struct IEnumerable_1_t70;
// System.Collections.IEnumerator
struct IEnumerator_t66;
// System.IO.BinaryWriter
struct BinaryWriter_t67;

#include "codegen/il2cpp-codegen.h"

// System.Void Appboy.Utilities.JSONArray::.ctor()
extern "C" void JSONArray__ctor_m182 (JSONArray_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONArray::get_Item(System.Int32)
extern "C" JSONNode_t11 * JSONArray_get_Item_m183 (JSONArray_t16 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONArray::set_Item(System.Int32,Appboy.Utilities.JSONNode)
extern "C" void JSONArray_set_Item_m184 (JSONArray_t16 * __this, int32_t ___aIndex, JSONNode_t11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONArray::get_Item(System.String)
extern "C" JSONNode_t11 * JSONArray_get_Item_m185 (JSONArray_t16 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONArray::set_Item(System.String,Appboy.Utilities.JSONNode)
extern "C" void JSONArray_set_Item_m186 (JSONArray_t16 * __this, String_t* ___aKey, JSONNode_t11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONArray::get_Count()
extern "C" int32_t JSONArray_get_Count_m187 (JSONArray_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONArray::Add(System.String,Appboy.Utilities.JSONNode)
extern "C" void JSONArray_Add_m188 (JSONArray_t16 * __this, String_t* ___aKey, JSONNode_t11 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONArray::Remove(System.Int32)
extern "C" JSONNode_t11 * JSONArray_Remove_m189 (JSONArray_t16 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONArray::Remove(Appboy.Utilities.JSONNode)
extern "C" JSONNode_t11 * JSONArray_Remove_m190 (JSONArray_t16 * __this, JSONNode_t11 * ___aNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Appboy.Utilities.JSONNode> Appboy.Utilities.JSONArray::get_Childs()
extern "C" Object_t* JSONArray_get_Childs_m191 (JSONArray_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Appboy.Utilities.JSONArray::GetEnumerator()
extern "C" Object_t * JSONArray_GetEnumerator_m192 (JSONArray_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONArray::ToString()
extern "C" String_t* JSONArray_ToString_m193 (JSONArray_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONArray::ToString(System.String)
extern "C" String_t* JSONArray_ToString_m194 (JSONArray_t16 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONArray::Serialize(System.IO.BinaryWriter)
extern "C" void JSONArray_Serialize_m195 (JSONArray_t16 * __this, BinaryWriter_t67 * ___aWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
