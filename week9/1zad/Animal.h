#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
private:
	char* name;
	unsigned age;
	void copy(const Animal& other);
	void erase();

public:
	
	Animal(const char* name, unsigned age);
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	~Animal();

	void changeTheName(const char* newName);

};


#endif // !ANIMAL_H



