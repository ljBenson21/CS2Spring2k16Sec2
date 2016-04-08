//#include <iostream>
//using namespace std;
//
//int* doubleCapacity(const int* list, int size)
//{
//	int* doubleArray = new int[size * 2];
//
//	for (int i = 0; i < 2 * size; i++)
//		doubleArray[i] = NULL;
//
//	for (int i = 0; i < size; i++)
//		doubleArray[i] = list[i];
//
//	
//	cout << endl;
//
//	return doubleArray;
//}
//
//int main()
//{
//	
//	const int size = 10; // creates a variable for size and sets it to ten
//
//	
//	int list[size]; // creates a pointer that points to list
//	int* doubledlist = doubleCapacity(list, size); // creates the array list[size]
//
//	
//	delete[] list;
//}
