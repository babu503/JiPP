#pragma once
#include <iostream>
#include "Shape.h"
class Rectangle : public Shape
{
private:
	double a, b;
public:
	Rectangle(double,double);
	double Area();
	~Rectangle();
};

