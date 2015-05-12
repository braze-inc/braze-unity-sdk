#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityElement
struct SecurityElement_t1837;
// System.Collections.ArrayList
struct ArrayList_t1372;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t80;
// System.Security.SecurityElement/SecurityAttribute
struct SecurityAttribute_t2181;

// System.Void System.Security.SecurityElement::.ctor(System.String)
 void SecurityElement__ctor_m10914 (SecurityElement_t1837 * __this, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.ctor(System.String,System.String)
 void SecurityElement__ctor_m10915 (SecurityElement_t1837 * __this, String_t* ___tag, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.cctor()
 void SecurityElement__cctor_m10916 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityElement::get_Children()
 ArrayList_t1372 * SecurityElement_get_Children_m10917 (SecurityElement_t1837 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::get_Tag()
 String_t* SecurityElement_get_Tag_m10918 (SecurityElement_t1837 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::set_Text(System.String)
 void SecurityElement_set_Text_m10919 (SecurityElement_t1837 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddAttribute(System.String,System.String)
 void SecurityElement_AddAttribute_m10920 (SecurityElement_t1837 * __this, String_t* ___name, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddChild(System.Security.SecurityElement)
 void SecurityElement_AddChild_m10921 (SecurityElement_t1837 * __this, SecurityElement_t1837 * ___child, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Escape(System.String)
 String_t* SecurityElement_Escape_m10922 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Unescape(System.String)
 String_t* SecurityElement_Unescape_m10923 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeName(System.String)
 bool SecurityElement_IsValidAttributeName_m10924 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeValue(System.String)
 bool SecurityElement_IsValidAttributeValue_m10925 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidTag(System.String)
 bool SecurityElement_IsValidTag_m10926 (Object_t * __this/* static, unused */, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidText(System.String)
 bool SecurityElement_IsValidText_m10927 (Object_t * __this/* static, unused */, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.SecurityElement::SearchForChildByTag(System.String)
 SecurityElement_t1837 * SecurityElement_SearchForChildByTag_m10928 (SecurityElement_t1837 * __this, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::ToString()
 String_t* SecurityElement_ToString_m10929 (SecurityElement_t1837 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::ToXml(System.Text.StringBuilder&,System.Int32)
 void SecurityElement_ToXml_m10930 (SecurityElement_t1837 * __this, StringBuilder_t80 ** ___s, int32_t ___level, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement/SecurityAttribute System.Security.SecurityElement::GetAttribute(System.String)
 SecurityAttribute_t2181 * SecurityElement_GetAttribute_m10931 (SecurityElement_t1837 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
