#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
enum food{carnivore, herbivore, omnivore};
class Animal
{
private:
protected:
	void erase();
	void copy(const Animal& other);
	char* name; 
	int weight;
	virtual int eat() const = 0;
	virtual std::string getFood() const = 0;
public:
	Animal();
	Animal(char* name, int weight);
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	virtual ~Animal();
	




};

#endif // !ANIMAL_H

