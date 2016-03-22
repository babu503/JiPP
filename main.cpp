#include "Rectangle.h";
#include "Shape.h";
#include "Square.h";

using namespace std;

int main()
{
	Rectangle prostokat(5, 3);
	std::cout << "---------------------------" <<std::endl;
	Square kwadrat(3);
	std::cout << "---------------------------" <<std::endl;				//podpunkt a
	Shape();
	std::cout << "---------------------------" << std::endl;
	
	cout << "Pole prostokata: " <<prostokat.Area() << endl;
	cout << "Pole kwadratu: " << kwadrat.Area() << endl;
	std::cout << "---------------------------" << std::endl;

	Rectangle &nowyprostokat = kwadrat;
	Shape &nowyksztalt = prostokat;
	Shape &nowyksztalt2 = kwadrat;
	cout << nowyprostokat.Area() << endl;				//podpunkt b
	cout << nowyksztalt.Area() << endl;
	cout << nowyksztalt2.Area() << endl;
	std::cout << "---------------------------" << std::endl;
	Rectangle * nowyprostokatw = &kwadrat;
	Shape * nowyksztaltw = &prostokat;
	Shape * nowyksztalt2w = &kwadrat;
	
	cout << nowyprostokatw->Area() << endl;				//podpunkt c
	cout << nowyksztaltw->Area() << endl;
	cout << nowyksztalt2w->Area() << endl;
	std::cout << "---------------------------" << std::endl;


	return 0;
}