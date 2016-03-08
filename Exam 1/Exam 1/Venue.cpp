#include <iostream>
#include <string>
#include "Event.h"
#include "Venue.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;

bool Venue :: validTime(int time) // done
{
	if (scheduledEvents[time - 1].getTime()== -1)
		return true; // since the time is already free, return true
	else 
		return false; // if the spot is filled return false
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

Event Venue  :: findEvent(int time) // done
{
	for (int i=0; i < 12; i++)
	{
		if (time == scheduledEvents[i].getTime())
		{
			return scheduledEvents[i]; // return the time of the event 
		}
	}
		return Event(); // this is a free spot for you to place another event
}

Event Venue::findEvent(string name) // done
{
	for (int i=0; i < 12; i++)
	{
		if (name == scheduledEvents[i].getTitle())
		{
			return scheduledEvents[i]; // return the title of the event
		}
		
	}
			return Event() ; // this is a free spot for you to place another event
}