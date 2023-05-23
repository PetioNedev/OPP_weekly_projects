#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "Car.h"
class ElectricCar : public Car
{

public:
	void startEngine() const override;
};


#endif // !ELECTRICCAR_H

