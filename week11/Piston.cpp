#include "Piston.h"

Piston::Piston(int range, int diameter, std::string name, std::string manifacturer, int year, int serialNumber):CarPart(name, manifacturer, year, serialNumber), range(range), diameter(diameter)
{
}

void Piston::display() const
{
	std::cout << this->range << this->diameter << this->name << this->manifacturer << this->year << this->serialNumber << std::endl;
}
