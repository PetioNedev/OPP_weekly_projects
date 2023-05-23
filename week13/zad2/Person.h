#pragma once
#include "BasePerson.h"
#include <iostream>
class Person : public BasePerson
{
public:
	Person(const std::string& name);
	BasePerson* clone() const override;
	void displayInfo();
};

