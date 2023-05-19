#ifndef BIRD_H
#define BIRD_H
#include "Animal.h"
#include <string>
class Bird : public Animal
{
private:
	//void copy(const Bird& other);
	//void erase();
protected:
	
	int eatint;
	std::string foodAnimal;
	std::string cityName;
public:
	Bird(std::string cityName, char* name, int weight);
	

	int eat() const override;
	std::string getFood() const override;


};


#endif // !BIRD_H




