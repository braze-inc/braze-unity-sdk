#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X501
struct X501_t1827;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t1821;
// System.Text.StringBuilder
struct StringBuilder_t80;

// System.Void Mono.Security.X509.X501::.cctor()
 void X501__cctor_m8844 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
 String_t* X501_ToString_m8845 (Object_t * __this/* static, unused */, ASN1_t1821 * ___seq, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1,System.Boolean,System.String,System.Boolean)
 String_t* X501_ToString_m8846 (Object_t * __this/* static, unused */, ASN1_t1821 * ___seq, bool ___reversed, String_t* ___separator, bool ___quotes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X501::AppendEntry(System.Text.StringBuilder,Mono.Security.ASN1,System.Boolean)
 void X501_AppendEntry_m8847 (Object_t * __this/* static, unused */, StringBuilder_t80 * ___sb, ASN1_t1821 * ___entry, bool ___quotes, MethodInfo* method) IL2CPP_METHOD_ATTR;
