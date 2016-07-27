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

// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t1795169203;
// System.Exception
struct Exception_t1967233988;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1534522647;
// Mono.Xml.SmallXmlParser/IContentHandler
struct IContentHandler_t2723187002;
// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t2005342479;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_TextReader1534522647.h"
#include "mscorlib_Mono_Xml_SmallXmlParser_AttrListImpl2005342479.h"

// System.Void Mono.Xml.SmallXmlParser::.ctor()
extern "C"  void SmallXmlParser__ctor_m3001211011 (SmallXmlParser_t1795169203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::Error(System.String)
extern "C"  Exception_t1967233988 * SmallXmlParser_Error_m26295006 (SmallXmlParser_t1795169203 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::UnexpectedEndError()
extern "C"  Exception_t1967233988 * SmallXmlParser_UnexpectedEndError_m2375866660 (SmallXmlParser_t1795169203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsNameChar(System.Char,System.Boolean)
extern "C"  bool SmallXmlParser_IsNameChar_m1063489066 (SmallXmlParser_t1795169203 * __this, uint16_t ___c0, bool ___start1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsWhitespace(System.Int32)
extern "C"  bool SmallXmlParser_IsWhitespace_m2144732407 (SmallXmlParser_t1795169203 * __this, int32_t ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces()
extern "C"  void SmallXmlParser_SkipWhitespaces_m2329793144 (SmallXmlParser_t1795169203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleWhitespaces()
extern "C"  void SmallXmlParser_HandleWhitespaces_m1038007407 (SmallXmlParser_t1795169203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces(System.Boolean)
extern "C"  void SmallXmlParser_SkipWhitespaces_m3800487407 (SmallXmlParser_t1795169203 * __this, bool ___expected0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Peek()
extern "C"  int32_t SmallXmlParser_Peek_m1856282464 (SmallXmlParser_t1795169203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Read()
extern "C"  int32_t SmallXmlParser_Read_m1913414875 (SmallXmlParser_t1795169203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Expect(System.Int32)
extern "C"  void SmallXmlParser_Expect_m2513955019 (SmallXmlParser_t1795169203 * __this, int32_t ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadUntil(System.Char,System.Boolean)
extern "C"  String_t* SmallXmlParser_ReadUntil_m2981293420 (SmallXmlParser_t1795169203 * __this, uint16_t ___until0, bool ___handleReferences1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadName()
extern "C"  String_t* SmallXmlParser_ReadName_m2721114783 (SmallXmlParser_t1795169203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Parse(System.IO.TextReader,Mono.Xml.SmallXmlParser/IContentHandler)
extern "C"  void SmallXmlParser_Parse_m1621116747 (SmallXmlParser_t1795169203 * __this, TextReader_t1534522647 * ___input0, Il2CppObject * ___handler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Cleanup()
extern "C"  void SmallXmlParser_Cleanup_m614519621 (SmallXmlParser_t1795169203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadContent()
extern "C"  void SmallXmlParser_ReadContent_m2273734372 (SmallXmlParser_t1795169203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleBufferedContent()
extern "C"  void SmallXmlParser_HandleBufferedContent_m1598683251 (SmallXmlParser_t1795169203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCharacters()
extern "C"  void SmallXmlParser_ReadCharacters_m2964534529 (SmallXmlParser_t1795169203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadReference()
extern "C"  void SmallXmlParser_ReadReference_m3589655222 (SmallXmlParser_t1795169203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::ReadCharacterReference()
extern "C"  int32_t SmallXmlParser_ReadCharacterReference_m4056299549 (SmallXmlParser_t1795169203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadAttribute(Mono.Xml.SmallXmlParser/AttrListImpl)
extern "C"  void SmallXmlParser_ReadAttribute_m1488878490 (SmallXmlParser_t1795169203 * __this, AttrListImpl_t2005342479 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCDATASection()
extern "C"  void SmallXmlParser_ReadCDATASection_m316037423 (SmallXmlParser_t1795169203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadComment()
extern "C"  void SmallXmlParser_ReadComment_m1185826634 (SmallXmlParser_t1795169203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
