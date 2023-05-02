#include "Pet.h"
#include "Animal.h"
#include <iostream>
#include <cstring>

void Pet::copy(const Pet& other)
{
	int size = strlen(other.ownerName);
		this->ownerName = new char[size + 1];
		for (size_t i = 0; i < size; i++)
		{
			this->ownerName[i] = other.ownerName[i];
	
		}
		this->ownerPhoneNumber = other.ownerPhoneNumber;
}

void Pet::erase()
{
	delete this->ownerName;
		this->ownerName = nullptr;
		ownerPhoneNumber = 0;
}

Pet::Pet(const char* ownerName, unsigned ownerPhoneNumber, const char* petName, unsigned petAge): Animal(petName, petAge), ownerName{new char[strlen(ownerName)]}, ownerPhoneNumber{ownerPhoneNumber}
{
	strcpy(this->ownerName, ownerName);
}

Pet::Pet(const Pet& other):Animal(other)
{
	copy(other);
}

Pet& Pet::operator=(const Pet& other)
{
	if (this != &other)
	{
		erase();
		copy(other);
	}
	return *this;
}

Pet::~Pet()
{
	erase();
}

void Pet::changeOwner(const char* ownerName, unsigned ownerPhoneNumber)
{
	erase();
	int size = strlen(ownerName);
	this->ownerName = new char[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		this->ownerName[i] = ownerName[i];

	}
	this->ownerPhoneNumber = ownerPhoneNumber;
}

  
