#pragma once
#include <iostream>
#include "Rectangle.h"
class Square : public Rectangle
{
private:
	double a;
public:
	double Area();
	Square(double);
	~Square();
};

