#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1410;
struct RSAParameters_t1410_marshaled;

void RSAParameters_t1410_marshal(const RSAParameters_t1410& unmarshaled, RSAParameters_t1410_marshaled& marshaled);
void RSAParameters_t1410_marshal_back(const RSAParameters_t1410_marshaled& marshaled, RSAParameters_t1410& unmarshaled);
void RSAParameters_t1410_marshal_cleanup(RSAParameters_t1410_marshaled& marshaled);
