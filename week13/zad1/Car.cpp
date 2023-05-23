#include "Car.h"
#include <iostream>
void Car::startEngine() const
{
	std::cout << "V";
	int throttle = this->power / 30;
	for (size_t i = 1; i <= throttle; i++)
	{
		std::cout << "o";
	}
	std::cout << "m"<<std::endl;
}

Car::Car(char* brand, int power, int weight, std::string owner, bool tangible): Vehicle(power,weight), Property(owner, tangible), brand(new char[strlen(brand)+1])
{
	strcpy(this->brand, brand);
}



Car::Car(const Car& other):Vehicle(other),Property(other)
{
	this->brand = new char[strlen(other.brand) + 1];
	strcpy(this->brand, other.brand);
}

Car& Car::operator=(const Car& other)
{
	if (this != &other)
	{
		Vehicle::operator=(other);
		Property::operator=(other);
		delete[] this->brand;
		this->brand = nullptr;
		this->brand = new char[strlen(other.brand) + 1];
		strcpy(this->brand, other.brand);
	}
	return *this;
}

Car::~Car()
{
	delete[] this->brand;
	this->brand = nullptr;
}
