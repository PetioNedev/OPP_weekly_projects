#include "Mamal.h"
#include <cstring>
void Mamal::copy(const Mamal& other)
{
	Animal::copy(other);
	this->osinovitelName = new char[strlen(other.osinovitelName + 1)];
	strcpy(this->name, other.osinovitelName);
	this->eatint = other.eatint;
	this->foodAnimal = other.foodAnimal;
}
void Mamal::erase()
{

	delete[] this->osinovitelName;
}
Mamal::Mamal(char* osinovitelName, int eat, int foodAnimal, char* name, int weight): osinovitelName(new char[strlen(osinovitelName+1)]), eatint(eatint), foodAnimal(foodAnimal), Animal(name,weight)
{
	strcpy(this->osinovitelName, osinovitelName);
}

Mamal::Mamal(const Mamal& other)
{
	copy(other);
}

Mamal& Mamal::operator=(const Mamal& other)
{
	if (this != &other)
	{
		erase();
		copy(other);
		
	}
	return *this;

}

Mamal::~Mamal()
{
	erase();
}

int Mamal::eat() const
{
	return this->eatint;
}

std::string Mamal::getFood() const
{
	return this->foodAnimal;
}

