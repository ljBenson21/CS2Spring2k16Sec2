#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;
int main()
{
	/*string word = "Porporato";
	cout << sizeof(word) << endl; // prints out the size of the string "word"
	cout << &word << endl; // address of the word
	cout << int(&word) << endl;
	
	int * ptr = NULL;
	int num = 56;
	ptr = &num;
	*ptr = 5;
	cout << *ptr << endl;*/

	int n;
	int *p = &n;
	cout << "Gimme a number (10-15): ";
	cin >> *p;

	int sum = 0;
	for (int i = 1; i <= *p; i++)
	{
		sum += i;
	}


	cout << "summation of " << *p << " = " << sum << endl;
	
}
