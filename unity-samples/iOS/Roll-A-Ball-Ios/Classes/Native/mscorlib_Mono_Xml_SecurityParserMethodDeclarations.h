#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.SecurityParser
struct SecurityParser_t1838;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t1837;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t1839;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t1840;

// System.Void Mono.Xml.SecurityParser::.ctor()
 void SecurityParser__ctor_m8931 (SecurityParser_t1838 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::LoadXml(System.String)
 void SecurityParser_LoadXml_m8932 (SecurityParser_t1838 * __this, String_t* ___xml, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement Mono.Xml.SecurityParser::ToXml()
 SecurityElement_t1837 * SecurityParser_ToXml_m8933 (SecurityParser_t1838 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartParsing(Mono.Xml.SmallXmlParser)
 void SecurityParser_OnStartParsing_m8934 (SecurityParser_t1838 * __this, SmallXmlParser_t1839 * ___parser, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnProcessingInstruction(System.String,System.String)
 void SecurityParser_OnProcessingInstruction_m8935 (SecurityParser_t1838 * __this, String_t* ___name, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnIgnorableWhitespace(System.String)
 void SecurityParser_OnIgnorableWhitespace_m8936 (SecurityParser_t1838 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
 void SecurityParser_OnStartElement_m8937 (SecurityParser_t1838 * __this, String_t* ___name, Object_t * ___attrs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndElement(System.String)
 void SecurityParser_OnEndElement_m8938 (SecurityParser_t1838 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnChars(System.String)
 void SecurityParser_OnChars_m8939 (SecurityParser_t1838 * __this, String_t* ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndParsing(Mono.Xml.SmallXmlParser)
 void SecurityParser_OnEndParsing_m8940 (SecurityParser_t1838 * __this, SmallXmlParser_t1839 * ___parser, MethodInfo* method) IL2CPP_METHOD_ATTR;
