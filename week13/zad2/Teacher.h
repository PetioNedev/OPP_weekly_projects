#pragma once
#include "BasePerson.h"
#include <iostream>`
class Teacher : virtual public BasePerson
{
private:
	std::string katedra;
	std::string predmeti;
public:
	Teacher(const std::string& name, const std::string& katedra, const std::string& predmeti);
	BasePerson* clone() const override;
	void displayInfo() override;

};

