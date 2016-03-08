#ifndef _VenueThing_H_
#define _VenueThing_H_
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Venue
{
private:
	Event scheduledEvents[12]; // array of 12 events 
	int numEvents;
	bool validTime(int time);// Does the entered time work? if so, book it, if not, cannot book
public:
	void addEvent(int time, string name); // Adds an event to the venue
	Event findEvent(int time); // Finds a specific event using the time of the event
	Event findEvent(string name); // Finds a specific event using the name of the event
};

#endif
