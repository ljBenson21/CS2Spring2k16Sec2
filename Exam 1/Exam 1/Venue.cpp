#include <iostream>
#include <string>
#include "Event.h"
#include "Venue.h"
using namespace std;

bool Venue :: validTime(int time) // done
{
	if (scheduledEvents[time - 1].getTime()== -1)
		return true;
	else 
		return false;
}

void Venue :: addEvent(int time, string name) // done
{
	if (validTime(time) == true)
	{
		scheduledEvents[time - 1].setTime(time); // sets the time of the event into the array
		scheduledEvents[time - 1].setTitle(name); // sets the name of the event into the array
		cout << "Event has been booked! :)" << endl;
	}

	else // when the event is not in the array
		cout << "Lo siento , pero su caso fue no pudo ser programado. (Your event was failed to be scheduled)" << endl; 
}

Event Venue :: findEvent(int time)
{
	for (int i; i < 12; i++)
	{
		if (time == scheduledEvents[i].getTime())
		{
			cout << scheduledEvents[i].getTitle();
			break;
		}
		else
			Event();
	}
}

Event Venue::findEvent(string name)
{
	for (int i; i < 12; i++)
	{
		if (name == scheduledEvents[i].getTitle())
		{
			cout << scheduledEvents[i].getTime();
			break;
		}
		else
			Event();
	}
}