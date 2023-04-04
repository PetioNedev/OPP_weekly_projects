#include "Power.h"
#include <iostream>

Power::Power(const std::string& name, int damage)
{
	this->damage = damage;
	this->name = name;
}

const std::string& Power::getName() const
{
	return this->name;
	// TODO: insert return statement here
}

int Power::getDamage() const
{
	return this->damage;
}

bool Power::operator<(const Power& other) const
{
	if (this->damage < other.damage)
	{
		return true;
	}
	return false;
}
