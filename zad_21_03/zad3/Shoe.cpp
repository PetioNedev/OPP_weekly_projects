#include "Shoe.h"
#include <iostream>
#include <string>



Shoe::Shoe()
{
  
}

Shoe::Shoe(int maxCount)
{
    this->maxCount = maxCount;
    this->models = new Shoe[maxCount];
}

Shoe::Shoe(const Shoe& other)
{
		this->maxCount = other.maxCount;
		this->models = new Shoe[other.maxCount];
		for (int i = 0; i < maxCount; i++)
		{
			this->models[i] = other.models[i];
		}
	
}

Shoe& Shoe::operator=(const Shoe& other)
{
	if (this != &other)
	{
		this->maxCount = other.maxCount;
		this->models = new Shoe[other.maxCount];
		for (int i = 0; i < maxCount; i++)
		{
			this->models[i] = other.models[i];
		}

		delete[] models;
		models = nullptr;


		
		
	}
	return *this;
}

Shoe::~Shoe()
{
    delete[] models;
	models = nullptr;
}

