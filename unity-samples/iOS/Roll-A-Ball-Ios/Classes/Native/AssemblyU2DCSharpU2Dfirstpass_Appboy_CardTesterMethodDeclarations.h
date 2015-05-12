#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Appboy.CardTester
struct CardTester_t6;
// System.Collections.Generic.List`1<Appboy.Models.Cards.Card>
struct List_1_t10;
// System.String
struct String_t;
// Appboy.Models.Cards.Card
struct Card_t11;

// System.Void Appboy.CardTester::.ctor()
 void CardTester__ctor_m88 (CardTester_t6 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.CardTester::LoadStaticCards()
 void CardTester_LoadStaticCards_m89 (CardTester_t6 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.CardTester::DisplayCards(System.Collections.Generic.List`1<Appboy.Models.Cards.Card>)
 void CardTester_DisplayCards_m90 (CardTester_t6 * __this, List_1_t10 * ___cardList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Appboy.CardTester::FormatCard(Appboy.Models.Cards.Card)
 String_t* CardTester_FormatCard_m91 (CardTester_t6 * __this, Card_t11 * ___card, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Appboy.CardTester::OnGUI()
 void CardTester_OnGUI_m92 (CardTester_t6 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
