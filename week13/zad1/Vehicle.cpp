#include "Vehicle.h"

int Vehicle::getPower()
{
	return this->power;
}

int Vehicle::getWeight()
{
	return this->weight;
}

Vehicle::Vehicle(int power, int weight): power(power), weight(weight)
{
}
