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

// System.Runtime.Remoting.ConfigHandler
struct ConfigHandler_t2512459856;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t1795169203;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t1818208664;
// System.Runtime.Remoting.ProviderData
struct ProviderData_t1283631139;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_Mono_Xml_SmallXmlParser1795169203.h"
#include "mscorlib_System_TimeSpan763862892.h"

// System.Void System.Runtime.Remoting.ConfigHandler::.ctor(System.Boolean)
extern "C"  void ConfigHandler__ctor_m2828599929 (ConfigHandler_t2512459856 * __this, bool ___onlyDelayedChannels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ValidatePath(System.String,System.String[])
extern "C"  void ConfigHandler_ValidatePath_m669680991 (ConfigHandler_t2512459856 * __this, String_t* ___element, StringU5BU5D_t2956870243* ___paths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.ConfigHandler::CheckPath(System.String)
extern "C"  bool ConfigHandler_CheckPath_m4139428019 (ConfigHandler_t2512459856 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnStartParsing(Mono.Xml.SmallXmlParser)
extern "C"  void ConfigHandler_OnStartParsing_m1924122290 (ConfigHandler_t2512459856 * __this, SmallXmlParser_t1795169203 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnProcessingInstruction(System.String,System.String)
extern "C"  void ConfigHandler_OnProcessingInstruction_m1288993410 (ConfigHandler_t2512459856 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnIgnorableWhitespace(System.String)
extern "C"  void ConfigHandler_OnIgnorableWhitespace_m3445514551 (ConfigHandler_t2512459856 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_OnStartElement_m3663675513 (ConfigHandler_t2512459856 * __this, String_t* ___name, Il2CppObject * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ParseElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ParseElement_m2192346409 (ConfigHandler_t2512459856 * __this, String_t* ___name, Il2CppObject * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnEndElement(System.String)
extern "C"  void ConfigHandler_OnEndElement_m2179721696 (ConfigHandler_t2512459856 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadCustomProviderData(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadCustomProviderData_m2072004816 (ConfigHandler_t2512459856 * __this, String_t* ___name, Il2CppObject * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadLifetine(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadLifetine_m4176640056 (ConfigHandler_t2512459856 * __this, Il2CppObject * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.ConfigHandler::ParseTime(System.String)
extern "C"  TimeSpan_t763862892  ConfigHandler_ParseTime_m1810159973 (ConfigHandler_t2512459856 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadChannel(Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern "C"  void ConfigHandler_ReadChannel_m1371377746 (ConfigHandler_t2512459856 * __this, Il2CppObject * ___attrs, bool ___isTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ProviderData System.Runtime.Remoting.ConfigHandler::ReadProvider(System.String,Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern "C"  ProviderData_t1283631139 * ConfigHandler_ReadProvider_m3082284056 (ConfigHandler_t2512459856 * __this, String_t* ___name, Il2CppObject * ___attrs, bool ___isTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadClientActivated(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadClientActivated_m1302642856 (ConfigHandler_t2512459856 * __this, Il2CppObject * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadServiceActivated(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadServiceActivated_m1359996932 (ConfigHandler_t2512459856 * __this, Il2CppObject * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadClientWellKnown(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadClientWellKnown_m3688669412 (ConfigHandler_t2512459856 * __this, Il2CppObject * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadServiceWellKnown(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadServiceWellKnown_m3746023488 (ConfigHandler_t2512459856 * __this, Il2CppObject * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadInteropXml(Mono.Xml.SmallXmlParser/IAttrList,System.Boolean)
extern "C"  void ConfigHandler_ReadInteropXml_m3144955191 (ConfigHandler_t2512459856 * __this, Il2CppObject * ___attrs, bool ___isElement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::ReadPreload(Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void ConfigHandler_ReadPreload_m856823045 (ConfigHandler_t2512459856 * __this, Il2CppObject * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ConfigHandler::GetNotNull(Mono.Xml.SmallXmlParser/IAttrList,System.String)
extern "C"  String_t* ConfigHandler_GetNotNull_m904874737 (ConfigHandler_t2512459856 * __this, Il2CppObject * ___attrs, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ConfigHandler::ExtractAssembly(System.String&)
extern "C"  String_t* ConfigHandler_ExtractAssembly_m1425451284 (ConfigHandler_t2512459856 * __this, String_t** ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnChars(System.String)
extern "C"  void ConfigHandler_OnChars_m2433222692 (ConfigHandler_t2512459856 * __this, String_t* ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ConfigHandler::OnEndParsing(Mono.Xml.SmallXmlParser)
extern "C"  void ConfigHandler_OnEndParsing_m1914300203 (ConfigHandler_t2512459856 * __this, SmallXmlParser_t1795169203 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
