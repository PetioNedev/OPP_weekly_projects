#pragma once
#include "BasePerson.h"
#include <iostream>`
class Student : virtual public BasePerson
{
private:
	int fn;
public:
	Student(const std::string& name, int fn);
	 BasePerson* clone() const override;
	 void displayInfo() override;

};

