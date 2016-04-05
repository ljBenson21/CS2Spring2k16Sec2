#include <iostream>
#include <string>
#include "Event.h"
#include "Venue.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;

Venue::Venue()
{
	numEvents = 0;
	size = 12;
	scheduledEvents = new Event[size];
}

void Venue:: doubleEvents()
{
	scheduledEvents = new Event[size * 2];
	
}

bool Venue :: validTime(int time) // done
{
	if (scheduledEvents[time - 1].getTime() == -1)
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
		numEvents++;
	}
	else if (numEvents == (size - 1))
	{
		doubleEvents(); // if the array is full, add more 
	}

	else
		cout << "Your event could not be scheduled because there is another event in it's place.";

}

Event Venue  :: findEvent(int time) // done
{
	for (int i=0; i < size; i++)
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
	for (int i=0; i < size; i++) // make sure to come back and fix this ************************************
	{
		if (name == scheduledEvents[i].getTitle())
		{
			return scheduledEvents[i]; // return the title of the event
		}
		
	}
			return Event() ; // this is a free spot for you to place another event
}