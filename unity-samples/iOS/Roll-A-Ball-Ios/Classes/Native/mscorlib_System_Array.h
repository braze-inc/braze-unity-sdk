#pragma once
#include <stdint.h>
// System.Object
#include "mscorlib_System_Object.h"
struct Il2CppArrayBounds;
// System.Array
struct Array_t  : public Object_t
{
	Il2CppArrayBounds* bounds;
	il2cpp_array_size_t max_length;
};
