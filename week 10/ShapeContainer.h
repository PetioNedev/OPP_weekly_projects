#ifndef SHAPECONTAINER_H
#define SHAPECONTAINER_H
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include <vector>


class ShapeContainer
{
private:
	std::vector<Shape> arr;
public:
	void addObject();
	void printInfo();
	void printShapes();

};




#endif // !SHAPECONTAINER


