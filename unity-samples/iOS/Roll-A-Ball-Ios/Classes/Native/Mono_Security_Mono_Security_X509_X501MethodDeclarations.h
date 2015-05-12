#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X501
struct X501_t1415;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t1384;
// System.Text.StringBuilder
struct StringBuilder_t89;

// System.Void Mono.Security.X509.X501::.cctor()
 void X501__cctor_m5826 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
 String_t* X501_ToString_m5827 (Object_t * __this/* static, unused */, ASN1_t1384 * ___seq, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1,System.Boolean,System.String,System.Boolean)
 String_t* X501_ToString_m5828 (Object_t * __this/* static, unused */, ASN1_t1384 * ___seq, bool ___reversed, String_t* ___separator, bool ___quotes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X501::AppendEntry(System.Text.StringBuilder,Mono.Security.ASN1,System.Boolean)
 void X501_AppendEntry_m5829 (Object_t * __this/* static, unused */, StringBuilder_t89 * ___sb, ASN1_t1384 * ___entry, bool ___quotes, MethodInfo* method) IL2CPP_METHOD_ATTR;
