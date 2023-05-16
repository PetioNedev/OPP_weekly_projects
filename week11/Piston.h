#ifndef PISTON_H
#define PISTON_H

#include "CarPart.h"
class Piston : public CarPart
{
private:
	double diameter;
	double range;
public:
	Piston( int range, int diameter, std::string name, std::string manifacturer, int year, int serialNumber);
	void display() const override;






};
	
#endif // !PISTON_H

