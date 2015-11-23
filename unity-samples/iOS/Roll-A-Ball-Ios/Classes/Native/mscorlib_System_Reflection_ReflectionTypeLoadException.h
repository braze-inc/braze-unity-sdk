#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Exception[]
struct ExceptionU5BU5D_t218;
// System.Type[]
struct TypeU5BU5D_t216;

#include "mscorlib_System_SystemException.h"

// System.Reflection.ReflectionTypeLoadException
struct  ReflectionTypeLoadException_t217  : public SystemException_t1227
{
	// System.Exception[] System.Reflection.ReflectionTypeLoadException::loaderExceptions
	ExceptionU5BU5D_t218* ___loaderExceptions_11;
	// System.Type[] System.Reflection.ReflectionTypeLoadException::types
	TypeU5BU5D_t216* ___types_12;
};
