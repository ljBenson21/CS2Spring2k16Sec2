#include <iostream>
#include "Word.h"
using std::string;
using std::cin;
using std::cout;
using std::endl;


word::word()
{
	s = "";
}
void word::changeWord()
{
	cout << "Please enter a word. ";
	cin >> s;
	

}
