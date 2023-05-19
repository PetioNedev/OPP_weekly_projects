#include "Animal.h"
#include <cstring>
void Animal::erase()
{
	delete this->name;
	name = nullptr;

}
void Animal::copy(const Animal& other)
{
	this->name = new char[strlen(other.name + 1)];
	strcpy(this->name, other.name);
	this->weight = other.weight;
}
Animal::Animal(char* name, int weight): name(new char[strlen(name+1)]), weight(weight)
{
	strcpy(this->name, name);
}

Animal::Animal(const Animal& other)
{
	this->copy(other);
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		erase();
		copy(other);

	}
	return *this;
}

Animal::~Animal()
{
	erase();
}
