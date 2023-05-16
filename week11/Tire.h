#ifndef TIRE_H
#define TIRE_H

#include "CarPart.h"
class Tire : public CarPart
{
private:
	double width;
	int profile;
	int diameter;
public:
	Tire(double width, int profile, int diameter, std::string name, std::string manifacturer, int year, int serialNumber);
	void display() const override;


};


#endif // !TIRE_H


