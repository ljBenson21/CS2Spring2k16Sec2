#include <iostream>
#include <ctime>
#include <string>
#include <cmath>
using namespace std;

int doubleNum(int num)
{
	num = num * 2;
	return num;
}
int addOneNum(int &num)
{
	num++;
	return num;
}
void add()
{
	srand(time(NULL));
	int x = rand() % 1000;
	int y = rand() % 1000;
	int sum = x + y;
	cout << "The sum of " << x << " and " << y << " is " << sum;
}
int getArray(int someIntegers[5])
{
	for (int i = 0; i < 5; i++)
		cout << someIntegers[i] << "   ";
	return someIntegers[5];
}
void isItInArray(int someIntegers[5])
{
	int i = 0;
	cout << endl;
	int integer;
	cout << "Please enter an integer: ";
	cin >> integer;
	//for (int i = 0; i < 5; i++) (someIntegers[5] == integer)
	while (i < 5)
	{
		if (someIntegers[i] == integer)
		{
			cout << "The integer is in this array." << endl;
			break;
		}
		else if (someIntegers[i] != integer)
			i++;
	}
		if (i == integer)
			cout << "The integer is not in this array." << endl;
} 


// EX02 IS DONE
void ex02()
{
	//A - Declare a variable hasPassedTest and initialize to true
	bool hasPassedTest = true;

	// B - Declare two variables x and y and make them random. Now output whether x is greater than or equal to y 
	srand(time(NULL));
	int x = rand() % 1000;
	int y = rand() % 1000;
	if (x > y || x == y)
		cout << x << " is greater than or equal to " << y << endl;
	else if (x < y)
		cout << x << " is less than " << y << endl;
	// C - Declares a variable numberOfShares and user enters a value. Output whether the value is less than 100
	double numberOfShares;
	cout << "Please enter a numerical value: ";
	cin >> numberOfShares;
	if (numberOfShares < 100)
		cout << numberOfShares << " is less than 100" << endl;
	else if (numberOfShares > 100 || numberOfShares == 100)
		cout << numberOfShares << " is greater than or equal to 100" << endl;
	//D User enters the width of a box and the width of a book. Output if box is divisible by book width
	int boxW, bookW;
	cout << "Please enter the width of a box: ";
	cin >> boxW; cout << endl;
	cout << "Now please enter the width of the book: ";
	cin >> bookW; cout << endl;
	if (boxW % bookW == 0)
		cout << "The width of the box can be distributed evenly through the book." << endl;
	else
		cout << "The width of the box cannot be distributed evenly through the book. "<< endl;
	//E - input shelf life and temperature 
	int temp,shelf; 
	cout << "What is the shelf life of the box of chocolates? ";
	cin >> shelf;
	cout << "What is the temperature outside right now? ";
	cin >> temp;
	if (temp > 90)
		cout << "The shelf life of the chocolates is " << shelf - 4 << "." << endl;
	else
		cout << "The shelf life of the chocolates is unaffected by the heat." << endl;
	
}
// EX03 IS DONE
void ex03()
{
	//A -Declare variables and calculates the length, diagonal, and outputs that
	double area;
	cout << "Please enter the area of the square: ";
	cin >> area; cout << endl;

	double leng = sqrt(area);
	double diag = sqrt(2 *((leng * leng)) );
	cout << "The length of the diagonal is: " << diag << endl;

	//B Declare variable and enter either yes or no. Display yes or no depending
	cout << "Enter either yes or no: ";
	char letter;
	cin >> letter;
	char y, n;
	if (letter == 'y' || letter == 'Y')
		cout << "YES!!" << endl;
	else if (letter == 'n' || letter == 'N')
		cout << "...no" << endl;
	//C - initialize the tab character to char
	char tab = '/t';

	//D - Declare a mailing address as string. Enter an address and have it outputtd back
	string mailingAddress;
	cin.ignore();
	cout << "Please enter your address: ";
	getline(cin, mailingAddress);
	//cout << "Your address is " << mailingAddress << endl;

	//E - initialize a string variable to an empty string
	string randomString = "";
}
// EX04 IS DONE
void ex04()
{
	//A user enters a number between 1 and 10. Loop until user gives a valid answer
	cout << "Please enter a number between 1 and 10: ";
	int num;
	cin >> num;
	while (num > 10)
	{
		//if number is not between one and ten
		cout << "Invalid value. Please enter a number between one and ten.";

		cin >> num;
	}
	// if number is between one and ten, continue.
	//B - output sum of cubes (x3) from 1 to number given
	int sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum = sum + i * i * i;
		cout << sum << "  ";
	}
	cout << endl;

	//C - output a number of asterisks using input from A
	int i = 0;
	do
	{
		i++;
		cout << " * ";
	} while (i < num);
	cout << endl;

	//D - output the even numbers from 0-40
	for (int i = 0; i <= 20; i++)
	{
		int evenNum = i * 2;
		cout << evenNum << "  ";
	}
	cout << endl;
	// E - create a function that takes and integer and doubles it.
	int x = doubleNum(num);
	cout << x << endl;
	//F - create a function that takes two integers and outputs the sum
	add();
	cout << endl;
	//G - create a function that adds one to its parameter. It should pass the integer by reference 
	int y = addOneNum(num);
	cout << y;
	cout << endl;
} 
//EX05 IS DONE
void ex05()
{
	//A - Loop that inputs numbers into an array
	int someIntegers[5];
	cout << "You will enter 5 numbers, please start with the first one:";
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		cin >> someIntegers[i];
		if (i <= 3)
			cout << "Awesome! Please enter the next number: ";
		else
			cout << "";
	}
	int  sum = 0;

	// B - Code that calculates the sum and product of the numbers in the array of the 5 numbers in the array 
	while (i <= 5 && i > 0)
	{
		i--;
		someIntegers[i];
		sum = sum + someIntegers[i];
	}
	cout << "The sum of these numbers are " <<  sum << "." << endl;

	int product = 1;
	while (i >= 0 && i <= 4)
	{

		someIntegers[i];
		product = product * someIntegers[i];
		i++;
	}
	cout << "The product of all of these numbers are " << product << "." << endl;
	//C - Call an array that outputs the values in another array
	int x = getArray(someIntegers);
	//D - Prompt user for value and outputs whether it is in the array or not
	isItInArray(someIntegers);
}
	


int main()
{
	cout << endl << endl;
	ex02();
	ex03();
	ex04();
	ex05();
	return 0;
}