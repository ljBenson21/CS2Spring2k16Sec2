#include <iostream>
using namespace std;


int main()
{
	int size = 10; // creates a fixed number for size
	int * list; // creates a pointer that points to list
	list = new int[size]; // creates the array list[size]

	doubleCapacity(list, size);

	delete[] list;
}
int * doubleCapacity(const int* list, int size)
{
	int *list = new int[size * 2];

	/*for (int i = 0; i < size; i++)
		list[i] = 10;*/

	return list;
}