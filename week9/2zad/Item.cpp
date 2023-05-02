#include "Item.h"
#include <iostream>
#include <cstring>

void Item::copy(const Item& other)
{
	int sizeAuthor = strlen(other.author);
	int sizeTitle = strlen(other.title);
	this->author = new char[sizeAuthor];
	this->title = new char[sizeTitle];
	for (size_t i = 0; i < sizeTitle; i++)
	{
		this->title[i] = other.title[i];
	}

	for (size_t i = 0; i < sizeAuthor; i++)
	{
		this->author[i] = other.author[i];
	}
}

void Item::erase()
{
	delete[] this->title;
	this->title = nullptr;
	delete[] this->author;
	this->author = nullptr;
}

Item::Item(int id, const char* title, const char* author, int dateDay, int dateMonth, int dateYear):id{id}, title{new char[strlen(title)]}, author{ new char[strlen(author)] }, dateDay{dateDay}, dateMonth{ dateMonth }, dateYear{ dateYear }
{
	strcpy(this->title, title);
	strcpy(this->author, author);
}

Item::Item(const Item& other)
{
	copy(other);
}

Item& Item::operator=(const Item& other)
{
	if (this != &other)
	{
		erase();
		copy(other);
	}
	return *this;
}

Item::~Item()
{
	erase();
}
