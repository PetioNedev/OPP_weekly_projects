#include "Student.h"

Student::Student()
{
	this->health = 100;
	this->power = nullptr;
	this->house = "None";
	
}

Student::Student(const std::string& name)
{
	this->name = name;
}

const std::string& Student::getName() const
{
	return this->name;
}

const std::string& Student::getHouse() const
{
	return this->house;
	// TODO: insert return statement here
}

void Student::setHouse(const std::string& house)
{
	this->house = house;
}

int Student::getHealth() const
{
	return this->health;
}

void Student::takeDamage(int damage)
{
	this->health -= damage;
}

void Student::setPower(const Power* power)
{
	this->power=power;
}

const Power* Student::getPower() const
{
	return power;
}

bool Student::isAlive()
{
	if (this->health > 0)
	{
		return true;
	}
	return false;
}

int Student::attack()
{
	if (power == nullptr)
	{
		return 0;

	}
	return power->getDamage();
}
