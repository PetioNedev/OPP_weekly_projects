#include "Animal.h"
#include <iostream>
#include <cstring>

void Animal::copy(const Animal& other)
{
	int size = strlen(other.name);
	this->name = new char[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		this->name[i] = other.name[i];

	}
	this->age = other.age;
}

void Animal::erase()
{
	delete this->name;
	this->name = nullptr;
	
}

Animal::Animal(const char* name, unsigned age): name(new char[strlen(name)+1]),age{age}
{
	strcpy(this->name, name);
}

Animal::Animal(const Animal& other)
{
	copy(other);
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

void Animal::changeTheName(const char* newName)
{
	erase();
	int size = strlen(newName);
	this->name = new char[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		this->name[i] = newName[i];

	}
}
