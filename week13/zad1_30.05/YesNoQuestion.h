#pragma once
#include "Question.h"
class YesNoQuestion : public Question
{
private:
	std::string theQuestion;
	int maxPoints;
	bool answer;
	std::string ans;
public:
	YesNoQuestion(std::string theQuestion, int maxPoints, bool answer);
	void ask() override;
	unsigned grade() override;
	void print() override;

};

