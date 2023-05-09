#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

class Shape
{
private:
	std::string label;
public:
	std::string getLabel();
	virtual void print() = 0;
	virtual Shape* copy() = 0;
	virtual double getPerimeter() = 0;
};


#endif // !SHAPE_H


