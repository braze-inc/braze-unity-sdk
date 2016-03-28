#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1640433287;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3161036435;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2776331335;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Ty612045862.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader
struct  ObjectReader_t4061492131  : public Il2CppObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.ObjectReader::_surrogateSelector
	Il2CppObject * ____surrogateSelector_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.ObjectReader::_context
	StreamingContext_t986364934  ____context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.ObjectReader::_binder
	SerializationBinder_t3161036435 * ____binder_2;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.ObjectReader::_filterLevel
	int32_t ____filterLevel_3;
	// System.Runtime.Serialization.ObjectManager System.Runtime.Serialization.Formatters.Binary.ObjectReader::_manager
	ObjectManager_t2776331335 * ____manager_4;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectReader::_registeredAssemblies
	Hashtable_t3875263730 * ____registeredAssemblies_5;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectReader::_typeMetadataCache
	Hashtable_t3875263730 * ____typeMetadataCache_6;
	// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::_lastObject
	Il2CppObject * ____lastObject_7;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectReader::_lastObjectID
	int64_t ____lastObjectID_8;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectReader::_rootObjectID
	int64_t ____rootObjectID_9;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.ObjectReader::arrayBuffer
	ByteU5BU5D_t58506160* ___arrayBuffer_10;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader::ArrayBufferLength
	int32_t ___ArrayBufferLength_11;

public:
	inline static int32_t get_offset_of__surrogateSelector_0() { return static_cast<int32_t>(offsetof(ObjectReader_t4061492131, ____surrogateSelector_0)); }
	inline Il2CppObject * get__surrogateSelector_0() const { return ____surrogateSelector_0; }
	inline Il2CppObject ** get_address_of__surrogateSelector_0() { return &____surrogateSelector_0; }
	inline void set__surrogateSelector_0(Il2CppObject * value)
	{
		____surrogateSelector_0 = value;
		Il2CppCodeGenWriteBarrier(&____surrogateSelector_0, value);
	}

	inline static int32_t get_offset_of__context_1() { return static_cast<int32_t>(offsetof(ObjectReader_t4061492131, ____context_1)); }
	inline StreamingContext_t986364934  get__context_1() const { return ____context_1; }
	inline StreamingContext_t986364934 * get_address_of__context_1() { return &____context_1; }
	inline void set__context_1(StreamingContext_t986364934  value)
	{
		____context_1 = value;
	}

	inline static int32_t get_offset_of__binder_2() { return static_cast<int32_t>(offsetof(ObjectReader_t4061492131, ____binder_2)); }
	inline SerializationBinder_t3161036435 * get__binder_2() const { return ____binder_2; }
	inline SerializationBinder_t3161036435 ** get_address_of__binder_2() { return &____binder_2; }
	inline void set__binder_2(SerializationBinder_t3161036435 * value)
	{
		____binder_2 = value;
		Il2CppCodeGenWriteBarrier(&____binder_2, value);
	}

	inline static int32_t get_offset_of__filterLevel_3() { return static_cast<int32_t>(offsetof(ObjectReader_t4061492131, ____filterLevel_3)); }
	inline int32_t get__filterLevel_3() const { return ____filterLevel_3; }
	inline int32_t* get_address_of__filterLevel_3() { return &____filterLevel_3; }
	inline void set__filterLevel_3(int32_t value)
	{
		____filterLevel_3 = value;
	}

	inline static int32_t get_offset_of__manager_4() { return static_cast<int32_t>(offsetof(ObjectReader_t4061492131, ____manager_4)); }
	inline ObjectManager_t2776331335 * get__manager_4() const { return ____manager_4; }
	inline ObjectManager_t2776331335 ** get_address_of__manager_4() { return &____manager_4; }
	inline void set__manager_4(ObjectManager_t2776331335 * value)
	{
		____manager_4 = value;
		Il2CppCodeGenWriteBarrier(&____manager_4, value);
	}

	inline static int32_t get_offset_of__registeredAssemblies_5() { return static_cast<int32_t>(offsetof(ObjectReader_t4061492131, ____registeredAssemblies_5)); }
	inline Hashtable_t3875263730 * get__registeredAssemblies_5() const { return ____registeredAssemblies_5; }
	inline Hashtable_t3875263730 ** get_address_of__registeredAssemblies_5() { return &____registeredAssemblies_5; }
	inline void set__registeredAssemblies_5(Hashtable_t3875263730 * value)
	{
		____registeredAssemblies_5 = value;
		Il2CppCodeGenWriteBarrier(&____registeredAssemblies_5, value);
	}

	inline static int32_t get_offset_of__typeMetadataCache_6() { return static_cast<int32_t>(offsetof(ObjectReader_t4061492131, ____typeMetadataCache_6)); }
	inline Hashtable_t3875263730 * get__typeMetadataCache_6() const { return ____typeMetadataCache_6; }
	inline Hashtable_t3875263730 ** get_address_of__typeMetadataCache_6() { return &____typeMetadataCache_6; }
	inline void set__typeMetadataCache_6(Hashtable_t3875263730 * value)
	{
		____typeMetadataCache_6 = value;
		Il2CppCodeGenWriteBarrier(&____typeMetadataCache_6, value);
	}

	inline static int32_t get_offset_of__lastObject_7() { return static_cast<int32_t>(offsetof(ObjectReader_t4061492131, ____lastObject_7)); }
	inline Il2CppObject * get__lastObject_7() const { return ____lastObject_7; }
	inline Il2CppObject ** get_address_of__lastObject_7() { return &____lastObject_7; }
	inline void set__lastObject_7(Il2CppObject * value)
	{
		____lastObject_7 = value;
		Il2CppCodeGenWriteBarrier(&____lastObject_7, value);
	}

	inline static int32_t get_offset_of__lastObjectID_8() { return static_cast<int32_t>(offsetof(ObjectReader_t4061492131, ____lastObjectID_8)); }
	inline int64_t get__lastObjectID_8() const { return ____lastObjectID_8; }
	inline int64_t* get_address_of__lastObjectID_8() { return &____lastObjectID_8; }
	inline void set__lastObjectID_8(int64_t value)
	{
		____lastObjectID_8 = value;
	}

	inline static int32_t get_offset_of__rootObjectID_9() { return static_cast<int32_t>(offsetof(ObjectReader_t4061492131, ____rootObjectID_9)); }
	inline int64_t get__rootObjectID_9() const { return ____rootObjectID_9; }
	inline int64_t* get_address_of__rootObjectID_9() { return &____rootObjectID_9; }
	inline void set__rootObjectID_9(int64_t value)
	{
		____rootObjectID_9 = value;
	}

	inline static int32_t get_offset_of_arrayBuffer_10() { return static_cast<int32_t>(offsetof(ObjectReader_t4061492131, ___arrayBuffer_10)); }
	inline ByteU5BU5D_t58506160* get_arrayBuffer_10() const { return ___arrayBuffer_10; }
	inline ByteU5BU5D_t58506160** get_address_of_arrayBuffer_10() { return &___arrayBuffer_10; }
	inline void set_arrayBuffer_10(ByteU5BU5D_t58506160* value)
	{
		___arrayBuffer_10 = value;
		Il2CppCodeGenWriteBarrier(&___arrayBuffer_10, value);
	}

	inline static int32_t get_offset_of_ArrayBufferLength_11() { return static_cast<int32_t>(offsetof(ObjectReader_t4061492131, ___ArrayBufferLength_11)); }
	inline int32_t get_ArrayBufferLength_11() const { return ___ArrayBufferLength_11; }
	inline int32_t* get_address_of_ArrayBufferLength_11() { return &___ArrayBufferLength_11; }
	inline void set_ArrayBufferLength_11(int32_t value)
	{
		___ArrayBufferLength_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
