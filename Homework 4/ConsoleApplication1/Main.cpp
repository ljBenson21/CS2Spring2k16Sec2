#include <iostream>
using namespace std;

void readInteger(int *size)
{
	cout << "Please enter the size for your array. ";
	cin >> *size;
}

int * arrayCreation(int size)
{
	int* arrayofNumbers = new int[size];
 
	for (int i = 0; i < size; i++)
	{
		arrayofNumbers[i] = NULL;
	}
	return arrayofNumbers;
}

void addinginNumbers(int* arrayofNumbers, int size)
{
	for (int* current = arrayofNumbers; current < arrayofNumbers + size; current++)
	{
		cout << "Please enter a number: ";
		cin >> *current;
	}
}

double computingAvg(int* arrayofNumbers, int size)
{
	int sum = 0;
	double avg;
	for (int *current = arrayofNumbers; current < arrayofNumbers + size; current++)
		sum = sum + *current;

	avg = sum / size;
	return avg;
}

int numbersAbove(int* arrayofNumbers, int size)
{
	int num = 0;
	for (int *current = arrayofNumbers; current < arrayofNumbers + size; current++)
	{
		if (*current > computingAvg(arrayofNumbers, size))
			num++;

		
	}return num;
}
int main()
{
	int s;
	readInteger(&s);

	int* newArray = arrayCreation(s);

	addinginNumbers(newArray, s);

	computingAvg(newArray, s);

	cout << "The average of the numbers within the array is " << computingAvg(newArray, s) << "." << endl;
	cout << "The numbers above the average that are in the set are " << numbersAbove(newArray, s) << "." << endl;

	delete[]newArray;


}