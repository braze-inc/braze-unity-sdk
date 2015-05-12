#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityElement
struct SecurityElement_t1849;
// System.Collections.ArrayList
struct ArrayList_t1383;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t89;
// System.Security.SecurityElement/SecurityAttribute
struct SecurityAttribute_t2193;

// System.Void System.Security.SecurityElement::.ctor(System.String)
 void SecurityElement__ctor_m11009 (SecurityElement_t1849 * __this, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.ctor(System.String,System.String)
 void SecurityElement__ctor_m11010 (SecurityElement_t1849 * __this, String_t* ___tag, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.cctor()
 void SecurityElement__cctor_m11011 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityElement::get_Children()
 ArrayList_t1383 * SecurityElement_get_Children_m11012 (SecurityElement_t1849 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::get_Tag()
 String_t* SecurityElement_get_Tag_m11013 (SecurityElement_t1849 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::set_Text(System.String)
 void SecurityElement_set_Text_m11014 (SecurityElement_t1849 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddAttribute(System.String,System.String)
 void SecurityElement_AddAttribute_m11015 (SecurityElement_t1849 * __this, String_t* ___name, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddChild(System.Security.SecurityElement)
 void SecurityElement_AddChild_m11016 (SecurityElement_t1849 * __this, SecurityElement_t1849 * ___child, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Escape(System.String)
 String_t* SecurityElement_Escape_m11017 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Unescape(System.String)
 String_t* SecurityElement_Unescape_m11018 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeName(System.String)
 bool SecurityElement_IsValidAttributeName_m11019 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeValue(System.String)
 bool SecurityElement_IsValidAttributeValue_m11020 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidTag(System.String)
 bool SecurityElement_IsValidTag_m11021 (Object_t * __this/* static, unused */, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidText(System.String)
 bool SecurityElement_IsValidText_m11022 (Object_t * __this/* static, unused */, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.SecurityElement::SearchForChildByTag(System.String)
 SecurityElement_t1849 * SecurityElement_SearchForChildByTag_m11023 (SecurityElement_t1849 * __this, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::ToString()
 String_t* SecurityElement_ToString_m11024 (SecurityElement_t1849 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::ToXml(System.Text.StringBuilder&,System.Int32)
 void SecurityElement_ToXml_m11025 (SecurityElement_t1849 * __this, StringBuilder_t89 ** ___s, int32_t ___level, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement/SecurityAttribute System.Security.SecurityElement::GetAttribute(System.String)
 SecurityAttribute_t2193 * SecurityElement_GetAttribute_m11026 (SecurityElement_t1849 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
