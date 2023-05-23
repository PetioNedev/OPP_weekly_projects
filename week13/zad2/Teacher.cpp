#include "Teacher.h"

Teacher::Teacher(const std::string& name, const std::string& katedra, const std::string& predmeti):BasePerson(name),katedra(katedra), predmeti(predmeti)
{
}

BasePerson* Teacher::clone() const
{
	return new Teacher(*this);
}

void Teacher::displayInfo()
{
	std::cout << this->name<<this->katedra << this->predmeti << std::endl;
}
