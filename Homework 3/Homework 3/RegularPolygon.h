#ifndef RegularPolygon_H_
#define RegularPolygon_H_

class regularpolygon
{
private:
	int n; // number of sides of polygon
	double side; // length of the side
	double x; // x coordinate of the center of the polygon
	double y; // y coordinate of the center of the polygon
public:
	regularpolygon() // default polygon
	{
		n = 3; side = 1; x = 0; y = 0; 
	}
	regularpolygon(int n, double side) // polygon centered at (0,0)
	{
		x = 0; y = 0;
	}
	regularpolygon(int n, double side, double x, double y); // user created polygon


	const int getn() { return n; } // return number of sides
	const double getside() { return side;} // return length of side
	const double getx() { return x; } // return x coordinate
	const double gety() { return y; } // return y coordinate
	double getPerimeter() const; // returns perimeter of polygon
	double getArea() const; // returns area of polygon
};
#endif 

