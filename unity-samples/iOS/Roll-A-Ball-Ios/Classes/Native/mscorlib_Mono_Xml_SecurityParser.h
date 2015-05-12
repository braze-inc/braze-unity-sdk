#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t1837;
// System.Collections.Stack
struct Stack_t993;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct SecurityParser_t1838  : public SmallXmlParser_t1839
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t1837 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t1837 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t993 * ___stack_15;
};
