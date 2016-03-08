#ifndef _Word_H
#define _Word_H
#include <string>
#include <iostream>

using std::string;

class word
{
private:
	string s;
public:
	void changeWord();
	bool isPalindrome(const string& s);
};

#endif
