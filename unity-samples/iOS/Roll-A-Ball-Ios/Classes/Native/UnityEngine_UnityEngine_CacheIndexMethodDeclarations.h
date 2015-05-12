#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t886;
struct CacheIndex_t886_marshaled;

void CacheIndex_t886_marshal(const CacheIndex_t886& unmarshaled, CacheIndex_t886_marshaled& marshaled);
void CacheIndex_t886_marshal_back(const CacheIndex_t886_marshaled& marshaled, CacheIndex_t886& unmarshaled);
void CacheIndex_t886_marshal_cleanup(CacheIndex_t886_marshaled& marshaled);
