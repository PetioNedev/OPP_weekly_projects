#ifndef CAR_H
#define CAR_H
#include<string>
#include <iostream>
#include "CarPart.h"
class Car
{
private:
	std::string brand;
	std::string model;
	CarPart** parts;
public:
	void displayCarParts() const;
	Car();
	Car(std::string brand,std::string model,CarPart** parts);
	Car(const Car& other);
	Car& operator=(const Car& other);
	~Car();


};

#endif // !CAR_H

