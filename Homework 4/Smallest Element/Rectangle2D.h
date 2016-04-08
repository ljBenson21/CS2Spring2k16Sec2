#ifndef RECT2D_H_
#define RECT2D_H_

#include <iostream>
using namespace std;

class Rect2D
{
private:
	double x, y, height, width;
public:
	Rect2D();
	Rect2D(double x, double y, double height, double width);
	double getX() const { return x; } // returns the x - coordinate 
	double getY() const { return y; } // returns the y - coordinate
	double getHeight() const { return height; } // returns the height of the rectangle
	double getWidth() const { return width; } // returns the width of the rectangle
	double getArea() const;
	double getPerimeter() const;
	bool contains(double x, double y) const;
	bool contains(const Rect2D &r) const;
	bool overlaps(const Rect2D &r) const;

};

#endif // !1

