#pragma once
#include <string>
#include <iostream>
class Question
{
protected:
	 static const std::string YES;
	 static const std::string NO;
public:
	virtual void ask() = 0;
	virtual unsigned grade() = 0;
	virtual void print() = 0;

	static bool validYesNoAnswer(const std::string& ans);
	static bool correctYesNoAnswer(const std::string& ans, bool correct_is_yes);
	virtual ~Question() = default;


};

