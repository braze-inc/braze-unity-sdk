#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1402;
struct DSAParameters_t1402_marshaled;

void DSAParameters_t1402_marshal(const DSAParameters_t1402& unmarshaled, DSAParameters_t1402_marshaled& marshaled);
void DSAParameters_t1402_marshal_back(const DSAParameters_t1402_marshaled& marshaled, DSAParameters_t1402& unmarshaled);
void DSAParameters_t1402_marshal_cleanup(DSAParameters_t1402_marshaled& marshaled);
