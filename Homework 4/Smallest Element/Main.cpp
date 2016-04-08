#include <iostream>
#include "Rectangle2D.h"
using namespace std;

int main()
{
	Rect2D rectangleUno(2, 2, 5.5, 4.9);
	Rect2D rectangleDos(4, 5, 10.5, 3.2);
	Rect2D rectangleTres(3, 5, 2.5, 5.4);

	cout << "The area of the first rectangle is " << rectangleUno.getArea() << " and the perimeter is" << endl;
	cout << rectangleUno.getPerimeter() << "." << endl;

	cout << rectangleUno.contains(3, 3) << endl;
	cout << rectangleUno.contains(rectangleDos) << endl;
	cout << rectangleUno.overlaps(rectangleTres) << endl;

	int nigga;
	cin >> nigga;
	return 0;

}