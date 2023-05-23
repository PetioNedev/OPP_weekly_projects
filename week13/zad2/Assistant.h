#pragma once
#include "Teacher.h"
#include "Student.h"
class Assistant : public Teacher, public Student
{
public:
	Assistant(const std::string& katedra, const std::string& name, int fn, const std::string& predmeti);
};

