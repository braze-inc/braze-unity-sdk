#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1391;
struct DSAParameters_t1391_marshaled;

void DSAParameters_t1391_marshal(const DSAParameters_t1391& unmarshaled, DSAParameters_t1391_marshaled& marshaled);
void DSAParameters_t1391_marshal_back(const DSAParameters_t1391_marshaled& marshaled, DSAParameters_t1391& unmarshaled);
void DSAParameters_t1391_marshal_cleanup(DSAParameters_t1391_marshaled& marshaled);
