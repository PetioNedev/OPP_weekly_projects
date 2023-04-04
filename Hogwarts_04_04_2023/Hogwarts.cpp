#include "Hogwarts.h"

Hogwarts::Hogwarts()
{
	
}

Hogwarts::Hogwarts(const Hogwarts& other)
{
	
	copy(other);
	
	
}

Hogwarts::Hogwarts(Hogwarts&& other)
{
	this->students = other.students;
	this->size = other.size;
	this->capacity = other.capacity;
	other.students = nullptr;
	other.capacity = 0;
	other.size = 0;
}

Hogwarts& Hogwarts::operator=(const Hogwarts& other)
{
	if (this != &other)
	{
		this->destroy();
		this->copy(other);
	}
	return *this;
}

Hogwarts& Hogwarts::operator=(Hogwarts&& other)
{
	if (this != &other)
	{
		this->destroy();
		this->students = other.students;
		this->size = other.size;
		this->capacity = other.capacity;
		other.students = nullptr;
		other.capacity = 0;
		other.size = 0;
		
	}
	return *this;
}

Hogwarts::~Hogwarts()
{
	destroy();
}

void Hogwarts::addStudent(const Student& student)
{
	
}

void Hogwarts::assignHouse(const std::string& studentName, const std::string& house)
{
}

void Hogwarts::givePower(const std::string& name, const Power& power)
{
}

int Hogwarts::getHouseStudentsCount(const std::string& house)
{
	return 0;
}

Student* Hogwarts::getFirstStudent(const std::string& house)
{
	return nullptr;
}

const Student* Hogwarts::getStudents()
{
	return nullptr;
}

bool Hogwarts::removeStudent(const std::string& name)
{
	return false;
}

void Hogwarts::copy(const Hogwarts& other)
{
	this->size = other.size;
	this->capacity = other.capacity;
	students = new Student[size];
	for (size_t i = 0; i < size; i++)
	{
		this->students[i] = other.students[i];
	}

}

void Hogwarts::destroy()
{
	delete[] students;
	students = nullptr;
	size = 0;
	capacity = 0;
}

std::ostream& operator<<(std::ostream& out, const Hogwarts& hogwarts)
{
	for (size_t i = 0; i < hogwarts.capacity; i++)
	{
		out << hogwarts.students[i].getName() << " " << hogwarts.students[i].getHouse() << " " << hogwarts.students[i].getHealth() << std::endl;
	}
}
