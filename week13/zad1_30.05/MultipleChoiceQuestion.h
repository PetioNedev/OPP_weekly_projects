#pragma once
#include "Question.h"
#include <vector>
class MultipleChoiceQuestion : public Question
{
private:
	std::string theQuestion;
	int maxPoints;
	std::vector<std::string> tvurdeniq;
	std::vector<bool> answers;
	std::string ans;
public:
	MultipleChoiceQuestion(std::string theQuestion, int maxPoints, std::vector<std::string> tvurdeniq,std::vector<bool> answers);
	void ask() override;
	unsigned grade() override;
	void print() override;

};

