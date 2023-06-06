#ifndef DEVICE_H
#define DEVICE_H
#include <string>
class Device
{
private:
	char* brand;
	char* model;
	double price;
public:
	Device(char* brand, char* model, double price);
	Device(const Device& other);
	Device& operator=(const Device& other);
	~Device();

	std::string getBrand();
	std::string getModel();
	double getPrice();

};


#endif // !DEVICE_H

