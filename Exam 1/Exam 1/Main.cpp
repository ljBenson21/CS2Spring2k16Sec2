#include <iostream>
#include <string>
#include "Event.h"
#include "Venue.h"

using namespace std;

int main()
{
	Venue theSpot;
	theSpot.addEvent(2, "Coffee Hour");    //Should work
	theSpot.addEvent(3, "Brunch w/ Bob");  //Should work
	theSpot.addEvent(3, "Bingo"); //Shouldn't work

	cout << theSpot.findEvent(10).getTitle() << endl; //Should find Coffee Hour
	cout << theSpot.findEvent("Brunch w/ Bob").getTime() << endl;  //Should find 11 o'clock
	cout << theSpot.findEvent("Bingo").getTime() << endl; //Should print -1, because Bingo ain't there!

	return 0;
}
