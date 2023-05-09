#include "Square.h"

void Square::print()
{
	std::cout << " ___" << std::endl;
	std::cout << "|   |" << std::endl;
	std::cout << "|___|" << std::endl;
}

Shape* Square::copy()
{
	Shape* ptr = new Square(*this);
	return ptr;
}

double Square::getPerimeter()
{
	return 4*a;
}
