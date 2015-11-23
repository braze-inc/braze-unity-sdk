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

// Appboy.Utilities.JSONNode
struct JSONNode_t11;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Appboy.Utilities.JSONNode>
struct IEnumerable_1_t70;
// Appboy.Utilities.JSONArray
struct JSONArray_t16;
// Appboy.Utilities.JSONClass
struct JSONClass_t22;
// System.Object
struct Object_t;
// System.IO.BinaryWriter
struct BinaryWriter_t67;
// System.IO.Stream
struct Stream_t68;
// System.IO.BinaryReader
struct BinaryReader_t69;

#include "codegen/il2cpp-codegen.h"

// System.Void Appboy.Utilities.JSONNode::.ctor()
extern "C" void JSONNode__ctor_m119 (JSONNode_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::Add(System.String,Appboy.Utilities.JSONNode)
extern "C" void JSONNode_Add_m120 (JSONNode_t11 * __this, String_t* ___aKey, JSONNode_t11 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::get_Item(System.Int32)
extern "C" JSONNode_t11 * JSONNode_get_Item_m121 (JSONNode_t11 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_Item(System.Int32,Appboy.Utilities.JSONNode)
extern "C" void JSONNode_set_Item_m122 (JSONNode_t11 * __this, int32_t ___aIndex, JSONNode_t11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::get_Item(System.String)
extern "C" JSONNode_t11 * JSONNode_get_Item_m123 (JSONNode_t11 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_Item(System.String,Appboy.Utilities.JSONNode)
extern "C" void JSONNode_set_Item_m124 (JSONNode_t11 * __this, String_t* ___aKey, JSONNode_t11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::get_Value()
extern "C" String_t* JSONNode_get_Value_m125 (JSONNode_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_Value(System.String)
extern "C" void JSONNode_set_Value_m126 (JSONNode_t11 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONNode::get_Count()
extern "C" int32_t JSONNode_get_Count_m127 (JSONNode_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::Add(Appboy.Utilities.JSONNode)
extern "C" void JSONNode_Add_m128 (JSONNode_t11 * __this, JSONNode_t11 * ___aItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::Remove(System.String)
extern "C" JSONNode_t11 * JSONNode_Remove_m129 (JSONNode_t11 * __this, String_t* ___aKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::Remove(System.Int32)
extern "C" JSONNode_t11 * JSONNode_Remove_m130 (JSONNode_t11 * __this, int32_t ___aIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::Remove(Appboy.Utilities.JSONNode)
extern "C" JSONNode_t11 * JSONNode_Remove_m131 (JSONNode_t11 * __this, JSONNode_t11 * ___aNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Appboy.Utilities.JSONNode> Appboy.Utilities.JSONNode::get_Childs()
extern "C" Object_t* JSONNode_get_Childs_m132 (JSONNode_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Appboy.Utilities.JSONNode> Appboy.Utilities.JSONNode::get_DeepChilds()
extern "C" Object_t* JSONNode_get_DeepChilds_m133 (JSONNode_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::ToString()
extern "C" String_t* JSONNode_ToString_m134 (JSONNode_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::ToString(System.String)
extern "C" String_t* JSONNode_ToString_m135 (JSONNode_t11 * __this, String_t* ___aPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONNode::get_AsInt()
extern "C" int32_t JSONNode_get_AsInt_m136 (JSONNode_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_AsInt(System.Int32)
extern "C" void JSONNode_set_AsInt_m137 (JSONNode_t11 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Appboy.Utilities.JSONNode::get_AsFloat()
extern "C" float JSONNode_get_AsFloat_m138 (JSONNode_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_AsFloat(System.Single)
extern "C" void JSONNode_set_AsFloat_m139 (JSONNode_t11 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Appboy.Utilities.JSONNode::get_AsDouble()
extern "C" double JSONNode_get_AsDouble_m140 (JSONNode_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_AsDouble(System.Double)
extern "C" void JSONNode_set_AsDouble_m141 (JSONNode_t11 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONNode::get_AsBool()
extern "C" bool JSONNode_get_AsBool_m142 (JSONNode_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::set_AsBool(System.Boolean)
extern "C" void JSONNode_set_AsBool_m143 (JSONNode_t11 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONArray Appboy.Utilities.JSONNode::get_AsArray()
extern "C" JSONArray_t16 * JSONNode_get_AsArray_m144 (JSONNode_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONClass Appboy.Utilities.JSONNode::get_AsObject()
extern "C" JSONClass_t22 * JSONNode_get_AsObject_m145 (JSONNode_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONNode::Equals(System.Object)
extern "C" bool JSONNode_Equals_m146 (JSONNode_t11 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Appboy.Utilities.JSONNode::GetHashCode()
extern "C" int32_t JSONNode_GetHashCode_m147 (JSONNode_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::Escape(System.String)
extern "C" String_t* JSONNode_Escape_m148 (Object_t * __this /* static, unused */, String_t* ___aText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::Parse(System.String)
extern "C" JSONNode_t11 * JSONNode_Parse_m149 (Object_t * __this /* static, unused */, String_t* ___aJSON, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::Serialize(System.IO.BinaryWriter)
extern "C" void JSONNode_Serialize_m150 (JSONNode_t11 * __this, BinaryWriter_t67 * ___aWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::SaveToStream(System.IO.Stream)
extern "C" void JSONNode_SaveToStream_m151 (JSONNode_t11 * __this, Stream_t68 * ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::SaveToCompressedStream(System.IO.Stream)
extern "C" void JSONNode_SaveToCompressedStream_m152 (JSONNode_t11 * __this, Stream_t68 * ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::SaveToCompressedFile(System.String)
extern "C" void JSONNode_SaveToCompressedFile_m153 (JSONNode_t11 * __this, String_t* ___aFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::SaveToCompressedBase64()
extern "C" String_t* JSONNode_SaveToCompressedBase64_m154 (JSONNode_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.JSONNode::SaveToFile(System.String)
extern "C" void JSONNode_SaveToFile_m155 (JSONNode_t11 * __this, String_t* ___aFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::SaveToBase64()
extern "C" String_t* JSONNode_SaveToBase64_m156 (JSONNode_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::Deserialize(System.IO.BinaryReader)
extern "C" JSONNode_t11 * JSONNode_Deserialize_m157 (Object_t * __this /* static, unused */, BinaryReader_t69 * ___aReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::LoadFromCompressedFile(System.String)
extern "C" JSONNode_t11 * JSONNode_LoadFromCompressedFile_m158 (Object_t * __this /* static, unused */, String_t* ___aFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::LoadFromCompressedStream(System.IO.Stream)
extern "C" JSONNode_t11 * JSONNode_LoadFromCompressedStream_m159 (Object_t * __this /* static, unused */, Stream_t68 * ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::LoadFromCompressedBase64(System.String)
extern "C" JSONNode_t11 * JSONNode_LoadFromCompressedBase64_m160 (Object_t * __this /* static, unused */, String_t* ___aBase64, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::LoadFromStream(System.IO.Stream)
extern "C" JSONNode_t11 * JSONNode_LoadFromStream_m161 (Object_t * __this /* static, unused */, Stream_t68 * ___aData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::LoadFromFile(System.String)
extern "C" JSONNode_t11 * JSONNode_LoadFromFile_m162 (Object_t * __this /* static, unused */, String_t* ___aFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::LoadFromBase64(System.String)
extern "C" JSONNode_t11 * JSONNode_LoadFromBase64_m163 (Object_t * __this /* static, unused */, String_t* ___aBase64, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.JSONNode Appboy.Utilities.JSONNode::op_Implicit(System.String)
extern "C" JSONNode_t11 * JSONNode_op_Implicit_m164 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.JSONNode::op_Implicit(Appboy.Utilities.JSONNode)
extern "C" String_t* JSONNode_op_Implicit_m165 (Object_t * __this /* static, unused */, JSONNode_t11 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONNode::op_Equality(Appboy.Utilities.JSONNode,System.Object)
extern "C" bool JSONNode_op_Equality_m166 (Object_t * __this /* static, unused */, JSONNode_t11 * ___a, Object_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Appboy.Utilities.JSONNode::op_Inequality(Appboy.Utilities.JSONNode,System.Object)
extern "C" bool JSONNode_op_Inequality_m167 (Object_t * __this /* static, unused */, JSONNode_t11 * ___a, Object_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
