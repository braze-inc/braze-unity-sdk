#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.UInt32[]
struct UInt32U5BU5D_t2133601851;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "mscorlib_System_Security_Cryptography_MD51557559991.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5CryptoServiceProvider
struct  MD5CryptoServiceProvider_t2380770080  : public MD5_t1557559991
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_t2133601851* ____H_4;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_t2133601851* ___buff_5;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_6;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_t58506160* ____ProcessingBuffer_7;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;

public:
	inline static int32_t get_offset_of__H_4() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t2380770080, ____H_4)); }
	inline UInt32U5BU5D_t2133601851* get__H_4() const { return ____H_4; }
	inline UInt32U5BU5D_t2133601851** get_address_of__H_4() { return &____H_4; }
	inline void set__H_4(UInt32U5BU5D_t2133601851* value)
	{
		____H_4 = value;
		Il2CppCodeGenWriteBarrier(&____H_4, value);
	}

	inline static int32_t get_offset_of_buff_5() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t2380770080, ___buff_5)); }
	inline UInt32U5BU5D_t2133601851* get_buff_5() const { return ___buff_5; }
	inline UInt32U5BU5D_t2133601851** get_address_of_buff_5() { return &___buff_5; }
	inline void set_buff_5(UInt32U5BU5D_t2133601851* value)
	{
		___buff_5 = value;
		Il2CppCodeGenWriteBarrier(&___buff_5, value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t2380770080, ___count_6)); }
	inline uint64_t get_count_6() const { return ___count_6; }
	inline uint64_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(uint64_t value)
	{
		___count_6 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_7() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t2380770080, ____ProcessingBuffer_7)); }
	inline ByteU5BU5D_t58506160* get__ProcessingBuffer_7() const { return ____ProcessingBuffer_7; }
	inline ByteU5BU5D_t58506160** get_address_of__ProcessingBuffer_7() { return &____ProcessingBuffer_7; }
	inline void set__ProcessingBuffer_7(ByteU5BU5D_t58506160* value)
	{
		____ProcessingBuffer_7 = value;
		Il2CppCodeGenWriteBarrier(&____ProcessingBuffer_7, value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_8() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t2380770080, ____ProcessingBufferCount_8)); }
	inline int32_t get__ProcessingBufferCount_8() const { return ____ProcessingBufferCount_8; }
	inline int32_t* get_address_of__ProcessingBufferCount_8() { return &____ProcessingBufferCount_8; }
	inline void set__ProcessingBufferCount_8(int32_t value)
	{
		____ProcessingBufferCount_8 = value;
	}
};

struct MD5CryptoServiceProvider_t2380770080_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_t2133601851* ___K_9;

public:
	inline static int32_t get_offset_of_K_9() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t2380770080_StaticFields, ___K_9)); }
	inline UInt32U5BU5D_t2133601851* get_K_9() const { return ___K_9; }
	inline UInt32U5BU5D_t2133601851** get_address_of_K_9() { return &___K_9; }
	inline void set_K_9(UInt32U5BU5D_t2133601851* value)
	{
		___K_9 = value;
		Il2CppCodeGenWriteBarrier(&___K_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
