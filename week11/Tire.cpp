#include "Tire.h"

Tire::Tire(double width, int profile, int diameter, std::string name, std::string manifacturer, int year, int serialNumber) : CarPart(name, manifacturer,year,serialNumber), width(width), diameter(diameter),  profile(profile)
{
}

void Tire::display() const
{
	std::cout << this->width << this->profile << this->diameter << this->name << this->manifacturer << this->year << this->serialNumber << std::endl;
}
