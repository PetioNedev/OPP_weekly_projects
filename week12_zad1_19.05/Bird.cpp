#include "Bird.h"

Bird::Bird(std::string cityName, char* name, int weight): Animal(name, weight), cityName(cityName)
{
}

int Bird::eat() const
{
	return this->eatint;
}

std::string Bird::getFood() const
{
	return this->foodAnimal;
}
