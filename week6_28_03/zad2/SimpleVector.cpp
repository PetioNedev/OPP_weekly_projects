#include "SimpleVector.h"
#include <iostream>
#include <fstream>

SimpleVector::SimpleVector()
{
}

SimpleVector& SimpleVector::operator+(SimpleVector& other)
{
	if (this->size != other.size)
	{
		throw std::exception("Error!");
	}
	for (size_t i = 0; i < size; i++)
	{
		this->data[i] += other.data[i];
	}
	return *this;
}

SimpleVector& SimpleVector::operator-(SimpleVector& other)
{
	if (this->size != other.size)
	{
		throw std::exception("Error!");
	}
	for (size_t i = 0; i < size; i++)
	{
		this->data[i] -= other.data[i];
	}
	return *this;
}

SimpleVector& SimpleVector::operator/(int skalar)
{
	
	for (size_t i = 0; i < size; i++)
	{
		this->data[i] /= skalar;
	}
	return *this;
}

SimpleVector& SimpleVector::operator*(int skalar)
{
	for (size_t i = 0; i < size; i++)
	{
		this->data[i] *= skalar;
	}
	return *this;
}

void SimpleVector::print()
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << this->data[i] << std::endl;
	}
}

void SimpleVector::writeBinary()
{
	std::ofstream o_file("Vector.bin", std::ios::binary);
	if (!o_file.is_open()) {
		std::cout << "Error opening file!\n";
		return ;
	}
	o_file.write((char*)&data, size*sizeof(int));
	o_file.close();
}

void SimpleVector::readBinary()
{
	std::ifstream o_file("Vector.bin", std::ios::binary);
	if (!o_file.is_open()) {
		std::cout << "Error opening file!\n";
		return;
	}
	o_file.read((char*)&data, size * sizeof(int));
	o_file.close();
}

void SimpleVector::writeText()
{
}

void SimpleVector::readText()
{
}
