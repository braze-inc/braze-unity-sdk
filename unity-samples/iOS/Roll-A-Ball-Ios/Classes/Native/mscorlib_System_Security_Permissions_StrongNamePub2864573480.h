#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNamePublicKeyBlob
struct  StrongNamePublicKeyBlob_t2864573480  : public Il2CppObject
{
public:
	// System.Byte[] System.Security.Permissions.StrongNamePublicKeyBlob::pubkey
	ByteU5BU5D_t58506160* ___pubkey_0;

public:
	inline static int32_t get_offset_of_pubkey_0() { return static_cast<int32_t>(offsetof(StrongNamePublicKeyBlob_t2864573480, ___pubkey_0)); }
	inline ByteU5BU5D_t58506160* get_pubkey_0() const { return ___pubkey_0; }
	inline ByteU5BU5D_t58506160** get_address_of_pubkey_0() { return &___pubkey_0; }
	inline void set_pubkey_0(ByteU5BU5D_t58506160* value)
	{
		___pubkey_0 = value;
		Il2CppCodeGenWriteBarrier(&___pubkey_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
