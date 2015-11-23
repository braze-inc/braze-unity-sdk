#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.SecurityElement
struct SecurityElement_t1497;
// System.Collections.Stack
struct Stack_t948;

#include "mscorlib_Mono_Xml_SmallXmlParser.h"

// Mono.Xml.SecurityParser
struct  SecurityParser_t1495  : public SmallXmlParser_t1496
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t1497 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t1497 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t948 * ___stack_15;
};
