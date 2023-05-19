#ifndef MAMAL_H
#define MAMAL_H
#include "Animal.h"
#include <string>
class Mamal : public Animal
{
private:
	void copy(const Mamal& other);
	void erase();
protected:
	char* osinovitelName;
	int eatint;
	std::string foodAnimal;
public:
	Mamal(char* osinovitelName, int eatint,int foodAnimal, char* name,int weight);
	Mamal(const Mamal& other);
	Mamal& operator=(const Mamal& other);
	~Mamal();

	int eat() const override;
	std::string getFood() const override;


};


#endif // !MAMAL_H


