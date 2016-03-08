#include <iostream>
#include <string>
#include "Event.h"
#include "Venue.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;


int main()
{
	Venue theSpot;
	theSpot.addEvent(8, "Golf with da homies");    //Should work
	theSpot.addEvent(11, "Lunch down in Cour'd Alene, then some spikeball.");  //Should work
	theSpot.addEvent(11, "Lunch date with my girl."); //Shouldn't work

	cout << theSpot.findEvent(8).getTitle() << " at 8am." << endl; //Should find Golf with da homies
	cout << "You have lunch in Cour'd Alene at " << theSpot.findEvent("Lunch down in Cour'd Alene, then some spikeball.").getTime() << endl;  //Should find 11 o'clock
	cout << theSpot.findEvent("Lunch date with my girl.").getTime() << endl; //Should print -1, because I cant have lunch with bae...

	return 0;
}
