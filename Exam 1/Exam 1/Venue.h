#ifndef _VenueThing_H_
#define _VenueThing_H_
#include <string>
using namespace std;


class Venue
{
private:
	Event scheduledEvents[12]; // array of 12 events 
	int numEvents;
public:
	bool validTime(int time);// Does the entered time work? if so, book it, if not, cannot book
	void addEvent(int time, string name); // Adds an event to the venue

	Event findEvent(int time); // Finds a specific event using the time of the event
	Event findEvent(string name); // Finds a specific event using the name of the event
};

#endif
