#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Appboy.Utilities.JSONArray
struct JSONArray_t25;
// Appboy.Utilities.JSONNode
struct JSONNode_t19;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Appboy.Utilities.JSONNode>
struct IEnumerable_1_t24;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.IO.BinaryWriter
struct BinaryWriter_t26;

// System.Void Appboy.Utilities.JSONArray::.ctor()
 void JSONArray__ctor_m181 (JSONArray_t25 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONArray::get_Item(System.Int32)
 JSONNode_t19 * JSONArray_get_Item_m182 (JSONArray_t25 * __this, int32_t ___aIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONArray::set_Item(System.Int32,Appboy.Utilities.JSONNode)
 void JSONArray_set_Item_m183 (JSONArray_t25 * __this, int32_t ___aIndex, JSONNode_t19 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONArray::get_Item(System.String)
 JSONNode_t19 * JSONArray_get_Item_m184 (JSONArray_t25 * __this, String_t* ___aKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONArray::set_Item(System.String,Appboy.Utilities.JSONNode)
 void JSONArray_set_Item_m185 (JSONArray_t25 * __this, String_t* ___aKey, JSONNode_t19 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONArray::get_Count()
 int32_t JSONArray_get_Count_m186 (JSONArray_t25 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONArray::Add(System.String,Appboy.Utilities.JSONNode)
 void JSONArray_Add_m187 (JSONArray_t25 * __this, String_t* ___aKey, JSONNode_t19 * ___aItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONArray::Remove(System.Int32)
 JSONNode_t19 * JSONArray_Remove_m188 (JSONArray_t25 * __this, int32_t ___aIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONArray::Remove(Appboy.Utilities.JSONNode)
 JSONNode_t19 * JSONArray_Remove_m189 (JSONArray_t25 * __this, JSONNode_t19 * ___aNode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Appboy.Utilities.JSONNode> Appboy.Utilities.JSONArray::get_Childs()
 Object_t* JSONArray_get_Childs_m190 (JSONArray_t25 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Appboy.Utilities.JSONArray::GetEnumerator()
 Object_t * JSONArray_GetEnumerator_m191 (JSONArray_t25 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONArray::ToString()
 String_t* JSONArray_ToString_m192 (JSONArray_t25 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONArray::ToString(System.String)
 String_t* JSONArray_ToString_m193 (JSONArray_t25 * __this, String_t* ___aPrefix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONArray::Serialize(System.IO.BinaryWriter)
 void JSONArray_Serialize_m194 (JSONArray_t25 * __this, BinaryWriter_t26 * ___aWriter, MethodInfo* method) IL2CPP_METHOD_ATTR;
