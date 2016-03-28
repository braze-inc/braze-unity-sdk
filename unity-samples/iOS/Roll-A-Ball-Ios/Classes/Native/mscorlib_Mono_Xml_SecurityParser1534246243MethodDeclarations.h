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

// Mono.Xml.SecurityParser
struct SecurityParser_t1534246243;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t1795169203;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t1818208664;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_Mono_Xml_SmallXmlParser1795169203.h"

// System.Void Mono.Xml.SecurityParser::.ctor()
extern "C"  void SecurityParser__ctor_m1163074771 (SecurityParser_t1534246243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::LoadXml(System.String)
extern "C"  void SecurityParser_LoadXml_m446823232 (SecurityParser_t1534246243 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement Mono.Xml.SecurityParser::ToXml()
extern "C"  SecurityElement_t2475331585 * SecurityParser_ToXml_m3913405971 (SecurityParser_t1534246243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartParsing(Mono.Xml.SmallXmlParser)
extern "C"  void SecurityParser_OnStartParsing_m3841263363 (SecurityParser_t1534246243 * __this, SmallXmlParser_t1795169203 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnProcessingInstruction(System.String,System.String)
extern "C"  void SecurityParser_OnProcessingInstruction_m1547961809 (SecurityParser_t1534246243 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnIgnorableWhitespace(System.String)
extern "C"  void SecurityParser_OnIgnorableWhitespace_m731146886 (SecurityParser_t1534246243 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void SecurityParser_OnStartElement_m4096581066 (SecurityParser_t1534246243 * __this, String_t* ___name, Il2CppObject * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndElement(System.String)
extern "C"  void SecurityParser_OnEndElement_m2589612977 (SecurityParser_t1534246243 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnChars(System.String)
extern "C"  void SecurityParser_OnChars_m1522268083 (SecurityParser_t1534246243 * __this, String_t* ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndParsing(Mono.Xml.SmallXmlParser)
extern "C"  void SecurityParser_OnEndParsing_m3668248508 (SecurityParser_t1534246243 * __this, SmallXmlParser_t1795169203 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
