#include "Student.h"

Student::Student(const std::string& name, int fn): BasePerson(name), fn(fn)
{
}

BasePerson* Student::clone() const
{
	return new Student(*this);
}

void Student::displayInfo()
{
	std::cout << this->name << this->id << this->fn<< std::endl;
}
