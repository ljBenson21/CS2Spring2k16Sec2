#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class QuadraticEquation
{
private:
	int a, b, c;
public:
	QuadraticEquation()
		:a(), b(), c()
	{
		
		cout << "Please enter a value for a: ";
		cin >> a;
		cout << "Now please enter a value for b: ";
		cin >> b;
		cout << "Finally, please enter a value for c: ";
		cin >> c;
	}

	int getA() { return a; }
	int getB() { return b; }
	int getC() { return c; }
	double getRoot1()
{
	getA(); getB(); getC();
	double root1 = (-b + sqrt(b * b - (4 * a * c))) / (2 * a);
	if (root1 < 0)
		return root1;
}
	double getRoot2()
	{
		getA(); getB(); getC();
		double root2 = (-b - sqrt(b * b - (4 * a * c))) / (2 * a);
		return root2;
	}
	double getDisctiminant()
	{
	double discriminant = b * b - (4 * a * c);
	if (discriminant < 0)
		return 0;
	else
		return discriminant;
	}
};



int main(int discriminant)
{
	QuadraticEquation value;
	
	if (discriminant > 0)
		cout << "The roots for the numbers you entered are " << value.getRoot1() << " and " << value.getRoot2() << "." << endl;
	else if (discriminant == 0)
		cout << "The root for the numbers you entered is " << value.getRoot1() << endl;
	else
		cout << "The numbers you entered have no real roots.";

}