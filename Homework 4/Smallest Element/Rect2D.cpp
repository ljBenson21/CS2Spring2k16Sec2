#include "Rectangle2D.h"
#include <iostream>


Rect2D::Rect2D()
{
	x = 0;
	y = 0;
	width = 1;
	height = 1;
}

Rect2D::Rect2D( double centerX, double centerY, double H, double W)
{
	x = centerX;
	y = centerY;
	height = H;
	width= W;
}

double Rect2D:: getArea() const
{
	double area = width * height;
	return area;
}

double Rect2D::getPerimeter() const
{
	double perimeter = (2 * width) + (2 * height);
	return perimeter;
}

bool Rect2D::contains(double x, double y) const
{
	int number = 0;
	if (x <= height && x <= width) // if x is less than height and width then x is in the rectangle
		number++;
	if (y <= height && y <= width) // if y is less than height and width then y is in the rectangle
		number++;

	if (number < 2)
		return false;
	else if (number == 2)
		return true;
}

bool Rect2D::contains(const Rect2D &r) const
{
	double insideRectx = r.getX(); // indicates the x coordinate of the inside rectangle
	double insideRecty = r.getY(); // indicates the y coordinate of the inside rectangle
	double insideRectH = r.getHeight(); // indicates height of inside rectangle
	double insideRectW = r.getWidth(); // indicates width of the inside rectangle

	int number = 0;
	if (insideRectx <= height && insideRectx <= width) // if x is less than height and width then x is in the rectangle
	{
		if (insideRectH < height && insideRectW < width) // if the height/width of the inside rectangle is less than height/width of the bigger rectangle then it is in the rectangle
			number++;
	}
	if (insideRecty <= height && insideRecty <= width) // if y is less than height and width then y is in the rectangle
	{
		if (insideRectH < height && insideRectW < width) // if the height/width of the inside rectangle is less than height/width of the bigger rectangle then it is in the rectangle
			number++;
	}
	if (number < 2)
		return false;
	else if (number == 2)
		return true;

}

bool Rect2D::overlaps(const Rect2D &r) const
{
	double insideRectx = r.getX(); // indicates the x coordinate of the inside rectangle
	double insideRecty = r.getY(); // indicates the y coordinate of the inside rectangle
	double insideRectH = r.getHeight(); // indicates height of inside rectangle
	double insideRectW = r.getWidth(); // indicates width of the inside rectangle

	int number = 0;
	if (insideRectx <= height && insideRectx <= width) // if x is less than height and width then x is in the rectangle
	{
		if (insideRectH < height || insideRectW < width) // if the height/width of the inside rectangle is less than height/width of the bigger rectangle then it is in the rectangle
			number++;
	}
	if (insideRecty <= height && insideRecty <= width) // if y is less than height and width then y is in the rectangle
	{
		if (insideRectH < height || insideRectW < width) // if the height/width of the inside rectangle is less than height/width of the bigger rectangle then it is in the rectangle
			number++;
	}
	if (number < 1)
		return false;
	else if (number == 1)
		return true;
}