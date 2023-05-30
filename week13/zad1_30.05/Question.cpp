#include "Question.h"

const std::string Question::YES = "Yes";
const std::string Question::NO = "No";

bool Question::validYesNoAnswer(const std::string& ans)
{
	if (ans == YES)
	{
		return true;
	}
	return false;
}

bool Question::correctYesNoAnswer(const std::string& ans, bool correct_is_yes)
{
	if ((correct_is_yes == true && ans == YES) || (correct_is_yes == false && ans == NO))
	{
		return true;
	}
	return false;
}
