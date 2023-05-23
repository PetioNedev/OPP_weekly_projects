#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include "Property.h"
#include <string>
class Car: public Vehicle,public Property
{
private:
	char* brand;
public:
	void startEngine() const override;
	Car(char* brand,int power, int weight, std::string owner, bool tangible);
	Car(const Car& other);
	Car& operator=(const Car& other);
	~Car();
};



#endif // !CAR_H

