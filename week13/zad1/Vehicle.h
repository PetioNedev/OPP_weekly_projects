#ifndef VEHICLE_H
#define VEHICLE_H


class Vehicle
{
protected:
	int power;
	int weight;
public:
	int getPower();
	int getWeight();
	virtual void startEngine() const = 0;

	Vehicle(int power, int weight);
};



#endif // !VEHICLE_H
