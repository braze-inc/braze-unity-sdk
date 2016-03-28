#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.String
struct String_t;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t919629080;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t2995724695  : public Il2CppObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t3875263730 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t2121638921 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	Il2CppObject * ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t2995724695, ___serialized_0)); }
	inline Hashtable_t3875263730 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_t3875263730 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_t3875263730 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier(&___serialized_0, value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t2995724695, ___values_1)); }
	inline ArrayList_t2121638921 * get_values_1() const { return ___values_1; }
	inline ArrayList_t2121638921 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t2121638921 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier(&___values_1, value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t2995724695, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier(&___assemblyName_2, value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t2995724695, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier(&___fullTypeName_3, value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t2995724695, ___converter_4)); }
	inline Il2CppObject * get_converter_4() const { return ___converter_4; }
	inline Il2CppObject ** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(Il2CppObject * value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier(&___converter_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
