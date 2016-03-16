#include <iostream>
#include <cmath>
#include "RegularPolygon.h"
using std::cout;
using std::endl;
int main()
{
	regularpolygon thegonofPoly1;
	regularpolygon polygonnumero2(6,4);
	regularpolygon tresPolygones(10, 4, 5.6, 7.8);

	cout << "The perimeter of the first polygon is " << thegonofPoly1.getPerimeter() << " and the area is " << thegonofPoly1.getArea() << "." << endl;
	cout << "The perimeter of the second polygon is " << polygonnumero2.getPerimeter() << " and the area is ";
	cout << polygonnumero2.getArea() << "." << endl;
	cout << "The perimeter of the third polygon is " << tresPolygones.getPerimeter() << " and the area is ";
	cout << tresPolygones.getArea() << "." << endl;
}