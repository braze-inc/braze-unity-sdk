#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1279;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t1467;

#include "mscorlib_System_Security_Cryptography_KeyedHashAlgorithm.h"

// System.Security.Cryptography.HMAC
struct  HMAC_t1378  : public KeyedHashAlgorithm_t1301
{
	// System.Boolean System.Security.Cryptography.HMAC::_disposed
	bool ____disposed_5;
	// System.String System.Security.Cryptography.HMAC::_hashName
	String_t* ____hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::_algo
	HashAlgorithm_t1279 * ____algo_7;
	// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::_block
	BlockProcessor_t1467 * ____block_8;
	// System.Int32 System.Security.Cryptography.HMAC::_blockSizeValue
	int32_t ____blockSizeValue_9;
};
