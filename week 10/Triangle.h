#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"

class Triangle: public Shape
{
private:
	double ab;
	double ac;
	double bc;
public:
	void print() override;
	Shape* copy()override;
	double getPerimeter() override;
};


#endif // !TRIANGLE_H


