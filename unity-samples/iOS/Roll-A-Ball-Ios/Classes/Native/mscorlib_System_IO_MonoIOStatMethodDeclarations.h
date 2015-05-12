#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.MonoIOStat
struct MonoIOStat_t1924;
struct MonoIOStat_t1924_marshaled;

void MonoIOStat_t1924_marshal(const MonoIOStat_t1924& unmarshaled, MonoIOStat_t1924_marshaled& marshaled);
void MonoIOStat_t1924_marshal_back(const MonoIOStat_t1924_marshaled& marshaled, MonoIOStat_t1924& unmarshaled);
void MonoIOStat_t1924_marshal_cleanup(MonoIOStat_t1924_marshaled& marshaled);
