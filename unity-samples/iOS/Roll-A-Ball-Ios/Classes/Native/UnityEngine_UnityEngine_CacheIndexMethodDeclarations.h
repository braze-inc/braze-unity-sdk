#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t875;
struct CacheIndex_t875_marshaled;

void CacheIndex_t875_marshal(const CacheIndex_t875& unmarshaled, CacheIndex_t875_marshaled& marshaled);
void CacheIndex_t875_marshal_back(const CacheIndex_t875_marshaled& marshaled, CacheIndex_t875& unmarshaled);
void CacheIndex_t875_marshal_cleanup(CacheIndex_t875_marshaled& marshaled);
