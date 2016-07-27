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

// System.Text.RegularExpressions.Syntax.Parser
struct Parser_t3684504143;
// System.String
struct String_t;
// System.Text.RegularExpressions.Syntax.RegularExpression
struct RegularExpression_t1734534468;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Text.RegularExpressions.Syntax.Group
struct Group_t1370157167;
// System.Text.RegularExpressions.Syntax.Assertion
struct Assertion_t324477170;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1499093192;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t563003706;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.ArgumentException
struct ArgumentException_t124305799;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Text_RegularExpressions_RegexOptions2783621746.h"
#include "mscorlib_System_Collections_Hashtable3875263730.h"
#include "System_System_Text_RegularExpressions_Syntax_Group1370157167.h"
#include "System_System_Text_RegularExpressions_Syntax_Assert324477170.h"
#include "System_System_Text_RegularExpressions_Syntax_Expres563003706.h"
#include "System_System_Text_RegularExpressions_Category3838697241.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"

// System.Void System.Text.RegularExpressions.Syntax.Parser::.ctor()
extern "C"  void Parser__ctor_m1404972287 (Parser_t3684504143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDecimal(System.String,System.Int32&)
extern "C"  int32_t Parser_ParseDecimal_m3118847812 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t* ___ptr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseOctal(System.String,System.Int32&)
extern "C"  int32_t Parser_ParseOctal_m1398273866 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t* ___ptr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseHex(System.String,System.Int32&,System.Int32)
extern "C"  int32_t Parser_ParseHex_m370479069 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t* ___ptr1, int32_t ___digits2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.String,System.Int32&,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Parser_ParseNumber_m633788361 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t* ___ptr1, int32_t ___b2, int32_t ___min3, int32_t ___max4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName(System.String,System.Int32&)
extern "C"  String_t* Parser_ParseName_m3152672479 (Il2CppObject * __this /* static, unused */, String_t* ___str0, int32_t* ___ptr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.RegularExpression System.Text.RegularExpressions.Syntax.Parser::ParseRegularExpression(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C"  RegularExpression_t1734534468 * Parser_ParseRegularExpression_m3601917447 (Parser_t3684504143 * __this, String_t* ___pattern0, int32_t ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::GetMapping(System.Collections.Hashtable)
extern "C"  int32_t Parser_GetMapping_m2242103141 (Parser_t3684504143 * __this, Hashtable_t3875263730 * ___mapping0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseGroup(System.Text.RegularExpressions.Syntax.Group,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.Syntax.Assertion)
extern "C"  void Parser_ParseGroup_m2536720048 (Parser_t3684504143 * __this, Group_t1370157167 * ___group0, int32_t ___options1, Assertion_t324477170 * ___assertion2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseGroupingConstruct(System.Text.RegularExpressions.RegexOptions&)
extern "C"  Expression_t1499093192 * Parser_ParseGroupingConstruct_m845745261 (Parser_t3684504143 * __this, int32_t* ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseAssertionType(System.Text.RegularExpressions.Syntax.ExpressionAssertion)
extern "C"  bool Parser_ParseAssertionType_m3709247266 (Parser_t3684504143 * __this, ExpressionAssertion_t563003706 * ___assertion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseOptions(System.Text.RegularExpressions.RegexOptions&,System.Boolean)
extern "C"  void Parser_ParseOptions_m1196738735 (Parser_t3684504143 * __this, int32_t* ___options0, bool ___negate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseCharacterClass(System.Text.RegularExpressions.RegexOptions)
extern "C"  Expression_t1499093192 * Parser_ParseCharacterClass_m4053595992 (Parser_t3684504143 * __this, int32_t ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseRepetitionBounds(System.Int32&,System.Int32&,System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_ParseRepetitionBounds_m2180911384 (Parser_t3684504143 * __this, int32_t* ___min0, int32_t* ___max1, int32_t ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Category System.Text.RegularExpressions.Syntax.Parser::ParseUnicodeCategory()
extern "C"  uint16_t Parser_ParseUnicodeCategory_m1866187541 (Parser_t3684504143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseSpecial(System.Text.RegularExpressions.RegexOptions)
extern "C"  Expression_t1499093192 * Parser_ParseSpecial_m1376060474 (Parser_t3684504143 * __this, int32_t ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseEscape()
extern "C"  int32_t Parser_ParseEscape_m675256065 (Parser_t3684504143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName()
extern "C"  String_t* Parser_ParseName_m417255288 (Parser_t3684504143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsNameChar(System.Char)
extern "C"  bool Parser_IsNameChar_m1287282583 (Il2CppObject * __this /* static, unused */, uint16_t ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Parser_ParseNumber_m2475743354 (Parser_t3684504143 * __this, int32_t ___b0, int32_t ___min1, int32_t ___max2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDigit(System.Char,System.Int32,System.Int32)
extern "C"  int32_t Parser_ParseDigit_m3105438222 (Il2CppObject * __this /* static, unused */, uint16_t ___c0, int32_t ___b1, int32_t ___n2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ConsumeWhitespace(System.Boolean)
extern "C"  void Parser_ConsumeWhitespace_m3800733805 (Parser_t3684504143 * __this, bool ___ignore0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ResolveReferences()
extern "C"  void Parser_ResolveReferences_m1842037937 (Parser_t3684504143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::HandleExplicitNumericGroups(System.Collections.ArrayList)
extern "C"  void Parser_HandleExplicitNumericGroups_m2933059971 (Parser_t3684504143 * __this, ArrayList_t2121638921 * ___explicit_numeric_groups0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnoreCase(System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_IsIgnoreCase_m3077668423 (Il2CppObject * __this /* static, unused */, int32_t ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsMultiline(System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_IsMultiline_m1332832164 (Il2CppObject * __this /* static, unused */, int32_t ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsExplicitCapture(System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_IsExplicitCapture_m2152082175 (Il2CppObject * __this /* static, unused */, int32_t ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsSingleline(System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_IsSingleline_m4108862573 (Il2CppObject * __this /* static, unused */, int32_t ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnorePatternWhitespace(System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_IsIgnorePatternWhitespace_m4039716246 (Il2CppObject * __this /* static, unused */, int32_t ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsECMAScript(System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_IsECMAScript_m432342092 (Il2CppObject * __this /* static, unused */, int32_t ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArgumentException System.Text.RegularExpressions.Syntax.Parser::NewParseException(System.String)
extern "C"  ArgumentException_t124305799 * Parser_NewParseException_m3475856021 (Parser_t3684504143 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
