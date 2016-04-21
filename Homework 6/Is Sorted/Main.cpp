#include <iostream>
#include <string>
using namespace std;

template<typename T>
bool isSorted(const T list[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (list[i] > list[i + 1])
			return false;

	}
			return true;

}
int main()
{
	const int list1[] = {1, 5, 9, 30, 31 ,32, 42, 56, 84,97};
	const double list2[] = { 23.4, 53, 6.48, 64.8, 98.1, 42, 73.1, 46.1, 91, 29.6 };
	const string  list3[] = { "Bobby", "Leslie" , "Luke", "Martin" , "Tyrone" };

	cout << isSorted(list1, 10) << endl;
	cout << isSorted(list2, 10) << endl;
	cout << isSorted(list3, 5) << endl;

}