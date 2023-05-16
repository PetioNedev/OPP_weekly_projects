#ifndef CARPART_H
#define CARPART_H
#include <string>
#include <iostream>
class CarPart
{
protected:
	std::string name;
	std::string manifacturer;
	int year;
	int serialNumber;
	static int count;
public:
	
	CarPart(std::string name, std::string manifacturer,int year, int serialNumber);
	virtual ~CarPart() = default;
	static int getCarPartCounter();
	virtual void display() const = 0;


};



#endif // !CARPART

