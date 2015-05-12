#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1399;
struct RSAParameters_t1399_marshaled;

void RSAParameters_t1399_marshal(const RSAParameters_t1399& unmarshaled, RSAParameters_t1399_marshaled& marshaled);
void RSAParameters_t1399_marshal_back(const RSAParameters_t1399_marshaled& marshaled, RSAParameters_t1399& unmarshaled);
void RSAParameters_t1399_marshal_cleanup(RSAParameters_t1399_marshaled& marshaled);
