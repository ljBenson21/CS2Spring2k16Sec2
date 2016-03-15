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

bool isPalindrome(const string&s); // compares the letters at the end and beginning until it gets to the middle

int main()
{
	string s = "";
	cout << "Please enter a word or phrase. "; // user enters a word or phrase with or without a space
	getline(cin, s);

	if (isPalindrome(s) == false) // if it is not a palindrome 
		cout << s << " is not a palindrome." << endl;

	else if (isPalindrome(s) == true) // if it is a palindrome
		cout << s << " is a palindrome." << endl;

	
	cin >> s; // I used this because my program was stopping after I ran it so I had no time to look at it
}

bool isPalindrome(const string& s)
{
	if (s.empty()) // if the string is empty, return false because there is no string!!
		return false;
	int i = 0;                // first character of the string
	int j = s.length() - 1; // last character of the string

	while (i < j)  // while the first char of the string is less than the last
	{
		if (s[i] != s[j]) // if the ascii number of the char in the strings aren't the same, return false
		{
			return false;
		}
		i++; // go to next letter in string
		j--; // go to the previous letter
	}
	return true;
}