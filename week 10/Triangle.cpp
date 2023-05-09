#include "Triangle.h"
#include <iostream>

void Triangle::print()
{
    std::cout <<  "/\\" << std::endl;
    std::cout << "/__\\" << std::endl;
}

Shape* Triangle::copy()
{
    Shape* ptr = new Triangle(*this);
    return ptr;
}


double Triangle::getPerimeter()
{
    return this->ab+this->ac+this->bc;
}
