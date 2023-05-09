#include "Circle.h"


const double pi = 3.14;
void Circle::print()
{
	 std::cout << "  _  " << std::endl;
	 std::cout << "/   \\" << std::endl;
	 std::cout << "|    |" << std::endl;
	 std::cout << "\\ _ /" << std::endl;
	
}

Shape* Circle::copy()
{
	
	Shape* ptr = new Circle(*this);
	return ptr;
}

double Circle::getPerimeter()
{
	return 2*pi*this->r;
}
