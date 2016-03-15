#include <iostream>
#include "RegularPolygon.h"
#include <cmath>

using std::cout;
using std::cin;

regularpolygon:: regularpolygon(int numsides, double lengthS) // polygon centered at (0,0)
{
	n = numsides;
	side = lengthS;
}
regularpolygon::regularpolygon(int numsides, double lengthS, double xcoor, double ycoor) // user created polygon
{
	n = numsides;
	side = lengthS;
	x = xcoor;
	y = ycoor;
}
double regularpolygon :: getPerimeter() const // returns the perimeter
{
	double perimeter;
	perimeter = n * side;
	return perimeter;
}
double regularpolygon::getArea() const // returns the area
{
	double area;
	double pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286;
	area = (n * pow(side, 2) / (4 * tan(pi / n)));
	return area;
}