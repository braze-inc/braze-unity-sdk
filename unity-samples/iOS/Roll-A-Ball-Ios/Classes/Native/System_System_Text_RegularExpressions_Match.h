#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Regex
struct Regex_t309;
// System.Text.RegularExpressions.IMachine
struct IMachine_t1640;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t1549;
// System.Text.RegularExpressions.Match
struct Match_t1548;
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Text.RegularExpressions.Match
struct Match_t1548  : public Group_t1550
{
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::regex
	Regex_t309 * ___regex_6;
	// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Match::machine
	Object_t * ___machine_7;
	// System.Int32 System.Text.RegularExpressions.Match::text_length
	int32_t ___text_length_8;
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::groups
	GroupCollection_t1549 * ___groups_9;
};
struct Match_t1548_StaticFields{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::empty
	Match_t1548 * ___empty_10;
};
