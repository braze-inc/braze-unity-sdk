#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Appboy.Utilities.JSONClass
struct JSONClass_t17;
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

// System.Void Appboy.Utilities.JSONClass::.ctor()
 void JSONClass__ctor_m211 (JSONClass_t17 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONClass::get_Item(System.String)
 JSONNode_t19 * JSONClass_get_Item_m212 (JSONClass_t17 * __this, String_t* ___aKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONClass::set_Item(System.String,Appboy.Utilities.JSONNode)
 void JSONClass_set_Item_m213 (JSONClass_t17 * __this, String_t* ___aKey, JSONNode_t19 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONClass::get_Item(System.Int32)
 JSONNode_t19 * JSONClass_get_Item_m214 (JSONClass_t17 * __this, int32_t ___aIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONClass::set_Item(System.Int32,Appboy.Utilities.JSONNode)
 void JSONClass_set_Item_m215 (JSONClass_t17 * __this, int32_t ___aIndex, JSONNode_t19 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONClass::get_Count()
 int32_t JSONClass_get_Count_m216 (JSONClass_t17 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONClass::Add(System.String,Appboy.Utilities.JSONNode)
 void JSONClass_Add_m217 (JSONClass_t17 * __this, String_t* ___aKey, JSONNode_t19 * ___aItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONClass::Remove(System.String)
 JSONNode_t19 * JSONClass_Remove_m218 (JSONClass_t17 * __this, String_t* ___aKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONClass::Remove(System.Int32)
 JSONNode_t19 * JSONClass_Remove_m219 (JSONClass_t17 * __this, int32_t ___aIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONClass::Remove(Appboy.Utilities.JSONNode)
 JSONNode_t19 * JSONClass_Remove_m220 (JSONClass_t17 * __this, JSONNode_t19 * ___aNode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Appboy.Utilities.JSONNode> Appboy.Utilities.JSONClass::get_Childs()
 Object_t* JSONClass_get_Childs_m221 (JSONClass_t17 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Appboy.Utilities.JSONClass::GetEnumerator()
 Object_t * JSONClass_GetEnumerator_m222 (JSONClass_t17 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONClass::ToString()
 String_t* JSONClass_ToString_m223 (JSONClass_t17 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONClass::ToString(System.String)
 String_t* JSONClass_ToString_m224 (JSONClass_t17 * __this, String_t* ___aPrefix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONClass::Serialize(System.IO.BinaryWriter)
 void JSONClass_Serialize_m225 (JSONClass_t17 * __this, BinaryWriter_t26 * ___aWriter, MethodInfo* method) IL2CPP_METHOD_ATTR;
