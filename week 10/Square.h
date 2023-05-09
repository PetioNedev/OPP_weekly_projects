#ifndef SQUARE_H
#define SQUARE_H
#include "Shape.h"

class Square : public Shape
{
private:
	double a;

public:
	void print() override;
	Shape* copy()override;
	double getPerimeter() override;
};


#endif // !CIRCLE_H