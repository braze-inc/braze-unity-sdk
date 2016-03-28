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

// Appboy.Utilities.Json/Parser
struct Parser_t2383423551;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Utilities_Json_80003545.h"

// System.Void Appboy.Utilities.Json/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m3565784946 (Parser_t2383423551 * __this, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Appboy.Utilities.Json/Parser::get_PeekChar()
extern "C"  uint16_t Parser_get_PeekChar_m2334144460 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Appboy.Utilities.Json/Parser::get_NextChar()
extern "C"  uint16_t Parser_get_NextChar_m878428004 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.Json/Parser::get_NextWord()
extern "C"  String_t* Parser_get_NextWord_m2835247933 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Utilities.Json/Parser/TOKEN Appboy.Utilities.Json/Parser::get_NextToken()
extern "C"  int32_t Parser_get_NextToken_m1604087535 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Appboy.Utilities.Json/Parser::Parse(System.String)
extern "C"  Il2CppObject * Parser_Parse_m1904924278 (Il2CppObject * __this /* static, unused */, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.Json/Parser::Dispose()
extern "C"  void Parser_Dispose_m123331021 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Appboy.Utilities.Json/Parser::ParseObject()
extern "C"  Dictionary_2_t2474804324 * Parser_ParseObject_m2478140476 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> Appboy.Utilities.Json/Parser::ParseArray()
extern "C"  List_1_t1634065389 * Parser_ParseArray_m2397496353 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Appboy.Utilities.Json/Parser::ParseValue()
extern "C"  Il2CppObject * Parser_ParseValue_m1381535207 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Appboy.Utilities.Json/Parser::ParseByToken(Appboy.Utilities.Json/Parser/TOKEN)
extern "C"  Il2CppObject * Parser_ParseByToken_m166055887 (Parser_t2383423551 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.Utilities.Json/Parser::ParseString()
extern "C"  String_t* Parser_ParseString_m944723343 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Appboy.Utilities.Json/Parser::ParseNumber()
extern "C"  Il2CppObject * Parser_ParseNumber_m3696662773 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.Utilities.Json/Parser::EatWhitespace()
extern "C"  void Parser_EatWhitespace_m1927136355 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
