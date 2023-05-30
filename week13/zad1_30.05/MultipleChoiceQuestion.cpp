#include "MultipleChoiceQuestion.h"

MultipleChoiceQuestion::MultipleChoiceQuestion(std::string theQuestion, int maxPoints, std::vector<std::string> tvurdeniq, std::vector<bool> answers): theQuestion{theQuestion}, maxPoints{maxPoints}, tvurdeniq{tvurdeniq}, answers{answers}
{
	int sizeAns = answers.size();
	int sizeTvurd = tvurdeniq.size();
}

void MultipleChoiceQuestion::ask()
{

}
