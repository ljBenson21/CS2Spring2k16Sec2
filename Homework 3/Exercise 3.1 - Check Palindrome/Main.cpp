#include <iostream>
//#include "Word.h"
#include <stack>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::stack;
using namespace std;

bool isPalindrome(const string&s);

int main()
{
	string s = "";
	cout << "Please enter a word or phrase. ";
	getline(cin, s);

	if (isPalindrome(s) == false)
		cout << s << " is not a palindrome." << endl;

	else if (isPalindrome(s) == true)
		cout << s << " is a palindrome." << endl;

	
	cin >> s;
}

bool isPalindrome(const string& s)
{
	if (s.empty())
		return false;
	int i = 0;                // first characters
	int j = s.length() - 1; // last character

	while (i < j)
	{
		if (s[i] != s[j])
		{
			return false;
		}
		i++;
		j--;
	}
	return true;
}