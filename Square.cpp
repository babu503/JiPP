#include "Square.h"



double Square::Area()
{
	return (a*a);
}

Square::Square(double a) : Rectangle(a,a)
{
	this->a = a;
	std::cout << "Obiekt Square zostal stworzony" << std::endl;
}


Square::~Square()
{
}
