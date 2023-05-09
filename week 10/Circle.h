#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle : public Shape
{
private:
	double r;
	
public:
	void print() override;
	Shape* copy()override;
	double getPerimeter() override;
};


#endif // !CIRCLE_H
