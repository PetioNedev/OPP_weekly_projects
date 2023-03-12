#include "MyString.h"
#include <iostream>
#include <cstring>



MyString::MyString()
{
	str = new char[1];
	*str = '\0';
}

MyString::~MyString()
{
	delete[] str;
	str = nullptr;
}

MyString::MyString(const char* str)
{
	size = strlen(str);
	this->str = new char[size];
	//strcpy(this->str, str);
	for (size_t i = 0; i < size; i++)
	{
		this->str[i] = str[i];
	}
}

MyString::MyString(const MyString& other)
{
	copy(other);
}

MyString& MyString::operator=(const MyString& other)
{
	if (this != &other)
	{
		erase();
		copy(other);

	}
	return *this;
}

int MyString::length(const char* str)
{

	return strlen(str);
}

char& MyString::at(unsigned indx)
{
	// TODO: insert return statement here
}

int MyString::find(char c, unsigned startPos)
{
	return 0;
}

bool MyString::empty()
{
	return false;
}

MyString MyString::substr(unsigned pos, unsigned n)
{
	return MyString();
}

void MyString::append(const MyString& str)
{
	 
}

void MyString::print()
{
	std::cout << "Array contents: ";
	for (size_t i = 0; i < size; i++)
	{
		std::cout << str[i] << " ";
	}
	std::cout << std::endl;
}

void MyString::copy(const MyString& other)
{
	size = other.size;
	str = new char[size];
	for (size_t i = 0; i < size; i++)
	{
		str[i] = other.str[i];
	}
}

void MyString::erase()
{	
	delete[] str;
}
