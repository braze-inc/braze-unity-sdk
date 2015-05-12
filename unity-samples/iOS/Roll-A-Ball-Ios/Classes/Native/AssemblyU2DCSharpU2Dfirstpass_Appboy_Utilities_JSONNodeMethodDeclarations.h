#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Appboy.Utilities.JSONNode
struct JSONNode_t19;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Appboy.Utilities.JSONNode>
struct IEnumerable_1_t24;
// Appboy.Utilities.JSONArray
struct JSONArray_t25;
// Appboy.Utilities.JSONClass
struct JSONClass_t17;
// System.Object
struct Object_t;
// System.IO.BinaryWriter
struct BinaryWriter_t26;
// System.IO.Stream
struct Stream_t27;
// System.IO.BinaryReader
struct BinaryReader_t28;

// System.Void Appboy.Utilities.JSONNode::.ctor()
 void JSONNode__ctor_m118 (JSONNode_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::Add(System.String,Appboy.Utilities.JSONNode)
 void JSONNode_Add_m119 (JSONNode_t19 * __this, String_t* ___aKey, JSONNode_t19 * ___aItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::get_Item(System.Int32)
 JSONNode_t19 * JSONNode_get_Item_m120 (JSONNode_t19 * __this, int32_t ___aIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_Item(System.Int32,Appboy.Utilities.JSONNode)
 void JSONNode_set_Item_m121 (JSONNode_t19 * __this, int32_t ___aIndex, JSONNode_t19 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::get_Item(System.String)
 JSONNode_t19 * JSONNode_get_Item_m122 (JSONNode_t19 * __this, String_t* ___aKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_Item(System.String,Appboy.Utilities.JSONNode)
 void JSONNode_set_Item_m123 (JSONNode_t19 * __this, String_t* ___aKey, JSONNode_t19 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::get_Value()
 String_t* JSONNode_get_Value_m124 (JSONNode_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_Value(System.String)
 void JSONNode_set_Value_m125 (JSONNode_t19 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONNode::get_Count()
 int32_t JSONNode_get_Count_m126 (JSONNode_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::Add(Appboy.Utilities.JSONNode)
 void JSONNode_Add_m127 (JSONNode_t19 * __this, JSONNode_t19 * ___aItem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::Remove(System.String)
 JSONNode_t19 * JSONNode_Remove_m128 (JSONNode_t19 * __this, String_t* ___aKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::Remove(System.Int32)
 JSONNode_t19 * JSONNode_Remove_m129 (JSONNode_t19 * __this, int32_t ___aIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::Remove(Appboy.Utilities.JSONNode)
 JSONNode_t19 * JSONNode_Remove_m130 (JSONNode_t19 * __this, JSONNode_t19 * ___aNode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Appboy.Utilities.JSONNode> Appboy.Utilities.JSONNode::get_Childs()
 Object_t* JSONNode_get_Childs_m131 (JSONNode_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Appboy.Utilities.JSONNode> Appboy.Utilities.JSONNode::get_DeepChilds()
 Object_t* JSONNode_get_DeepChilds_m132 (JSONNode_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::ToString()
 String_t* JSONNode_ToString_m133 (JSONNode_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::ToString(System.String)
 String_t* JSONNode_ToString_m134 (JSONNode_t19 * __this, String_t* ___aPrefix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONNode::get_AsInt()
 int32_t JSONNode_get_AsInt_m135 (JSONNode_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_AsInt(System.Int32)
 void JSONNode_set_AsInt_m136 (JSONNode_t19 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Appboy.Utilities.JSONNode::get_AsFloat()
 float JSONNode_get_AsFloat_m137 (JSONNode_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_AsFloat(System.Single)
 void JSONNode_set_AsFloat_m138 (JSONNode_t19 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Appboy.Utilities.JSONNode::get_AsDouble()
 double JSONNode_get_AsDouble_m139 (JSONNode_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_AsDouble(System.Double)
 void JSONNode_set_AsDouble_m140 (JSONNode_t19 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONNode::get_AsBool()
 bool JSONNode_get_AsBool_m141 (JSONNode_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_AsBool(System.Boolean)
 void JSONNode_set_AsBool_m142 (JSONNode_t19 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONArray Appboy.Utilities.JSONNode::get_AsArray()
 JSONArray_t25 * JSONNode_get_AsArray_m143 (JSONNode_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONClass Appboy.Utilities.JSONNode::get_AsObject()
 JSONClass_t17 * JSONNode_get_AsObject_m144 (JSONNode_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONNode::Equals(System.Object)
 bool JSONNode_Equals_m145 (JSONNode_t19 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONNode::GetHashCode()
 int32_t JSONNode_GetHashCode_m146 (JSONNode_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::Escape(System.String)
 String_t* JSONNode_Escape_m147 (Object_t * __this/* static, unused */, String_t* ___aText, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::Parse(System.String)
 JSONNode_t19 * JSONNode_Parse_m148 (Object_t * __this/* static, unused */, String_t* ___aJSON, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::Serialize(System.IO.BinaryWriter)
 void JSONNode_Serialize_m149 (JSONNode_t19 * __this, BinaryWriter_t26 * ___aWriter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::SaveToStream(System.IO.Stream)
 void JSONNode_SaveToStream_m150 (JSONNode_t19 * __this, Stream_t27 * ___aData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::SaveToCompressedStream(System.IO.Stream)
 void JSONNode_SaveToCompressedStream_m151 (JSONNode_t19 * __this, Stream_t27 * ___aData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::SaveToCompressedFile(System.String)
 void JSONNode_SaveToCompressedFile_m152 (JSONNode_t19 * __this, String_t* ___aFileName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::SaveToCompressedBase64()
 String_t* JSONNode_SaveToCompressedBase64_m153 (JSONNode_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::SaveToFile(System.String)
 void JSONNode_SaveToFile_m154 (JSONNode_t19 * __this, String_t* ___aFileName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::SaveToBase64()
 String_t* JSONNode_SaveToBase64_m155 (JSONNode_t19 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::Deserialize(System.IO.BinaryReader)
 JSONNode_t19 * JSONNode_Deserialize_m156 (Object_t * __this/* static, unused */, BinaryReader_t28 * ___aReader, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::LoadFromCompressedFile(System.String)
 JSONNode_t19 * JSONNode_LoadFromCompressedFile_m157 (Object_t * __this/* static, unused */, String_t* ___aFileName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::LoadFromCompressedStream(System.IO.Stream)
 JSONNode_t19 * JSONNode_LoadFromCompressedStream_m158 (Object_t * __this/* static, unused */, Stream_t27 * ___aData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::LoadFromCompressedBase64(System.String)
 JSONNode_t19 * JSONNode_LoadFromCompressedBase64_m159 (Object_t * __this/* static, unused */, String_t* ___aBase64, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::LoadFromStream(System.IO.Stream)
 JSONNode_t19 * JSONNode_LoadFromStream_m160 (Object_t * __this/* static, unused */, Stream_t27 * ___aData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::LoadFromFile(System.String)
 JSONNode_t19 * JSONNode_LoadFromFile_m161 (Object_t * __this/* static, unused */, String_t* ___aFileName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::LoadFromBase64(System.String)
 JSONNode_t19 * JSONNode_LoadFromBase64_m162 (Object_t * __this/* static, unused */, String_t* ___aBase64, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::op_Implicit(System.String)
 JSONNode_t19 * JSONNode_op_Implicit_m163 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::op_Implicit(Appboy.Utilities.JSONNode)
 String_t* JSONNode_op_Implicit_m164 (Object_t * __this/* static, unused */, JSONNode_t19 * ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONNode::op_Equality(Appboy.Utilities.JSONNode,System.Object)
 bool JSONNode_op_Equality_m165 (Object_t * __this/* static, unused */, JSONNode_t19 * ___a, Object_t * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONNode::op_Inequality(Appboy.Utilities.JSONNode,System.Object)
 bool JSONNode_op_Inequality_m166 (Object_t * __this/* static, unused */, JSONNode_t19 * ___a, Object_t * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
