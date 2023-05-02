#ifndef PET_H
#define PET_H

#include "Animal.h"

class Pet : public Animal
{
private:
	char* ownerName;
	unsigned ownerPhoneNumber;
	void copy(const Pet& other);
	void erase();
public:
	Pet(const char* ownerName, unsigned ownerPhoneNumber, const char* petName, unsigned petAge);
	Pet(const Pet& other);
	Pet& operator=(const Pet & other);
	~Pet();

	void changeOwner(const char* ownerName, unsigned ownerPhoneNumber);

};

#endif // !PET_H


