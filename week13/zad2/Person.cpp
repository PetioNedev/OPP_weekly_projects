#include "Person.h"

Person::Person(const std::string& name):BasePerson(name)
{
}

BasePerson* Person::clone() const
{
	return new Person(*this);
}

void Person::displayInfo()
{
	std::cout << this->name << this->id << std::endl;
}
