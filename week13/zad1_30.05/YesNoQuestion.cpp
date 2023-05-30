#include "YesNoQuestion.h"

YesNoQuestion::YesNoQuestion(std::string theQuestion, int maxPoints, bool answer): theQuestion(theQuestion),maxPoints(maxPoints),answer(answer)
{
}

void YesNoQuestion::ask()
{
	std::cout << theQuestion << std::endl;
	std::cout << "Answer the question with yes or no!" << std::endl;	
	std::cin >> this->ans;
	

}

unsigned YesNoQuestion::grade()
{
	if (Question::correctYesNoAnswer(ans, answer))
	{
		return this->maxPoints ;
	}
	return 0;
}

void YesNoQuestion::print()
{
	std::cout << this->theQuestion << std::endl;
	
}
