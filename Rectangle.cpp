#include "Rectangle.h"



Rectangle::Rectangle(double a, double b)
{
	this->a = a;
	this->b = b;
	std::cout << "Obiekt Rectangle zostal stworzony" << std::endl;
}

double Rectangle::Area()
{
	return (a*b);
}


Rectangle::~Rectangle()
{
}
