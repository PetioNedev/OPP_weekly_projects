#include "Engine.h"

Engine::Engine(int hp, std::string name, std::string manifacturer, int year, int serialNumber) :CarPart(name, manifacturer, year, serialNumber), hp(hp)
{
}



void Engine::addPiston(const Piston& piston)
{
	this->pistons.push_back(piston);
}

void Engine::display() const
{
	std::cout << hp << std::endl;
	std::cout <<this->name << this->manifacturer << this->year << this->serialNumber << std::endl;
	for (size_t i = 0; i < pistons.size(); i++)
	{
		this->pistons[i].display();
	}
}
