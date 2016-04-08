#include <iostream>
using namespace std;


int* create_array()
{
	int* Array = new int[8];
	Array[0] = 1;
	Array[1] = 2;
	Array[2] = 4;
	Array[3] = 5;
	Array[4] = 10;
	Array[5] = 100;
	Array[6] = 2;
	Array[7] = -22;

	return Array;
}
int find_smallest(int* num)
{
	int smallestInteger = num[0];
	for (int* curr = num; curr < num + 8; curr++)
	{
		if (*curr < smallestInteger)
			smallestInteger = *curr;
	}

	return smallestInteger;
}

int main()
{
	int* num = create_array();
	cout << "Out of all the arrays, the smallest one is " << find_smallest(num) << "." << endl;

	return 0;
}