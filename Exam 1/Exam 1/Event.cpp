#include <iostream>
#include <string>
#include "Event.h"
using std::string;

Event::Event() // done
{
	title = "free";
	time = -1;
}

void Event:: setTime(int t) // sets the time of the event
{
	time = t;
}
void Event :: setTitle(string name) // sets the title of the event
{
	title = name;
}
Event::Event(int t, string name) // done
{
	title = name; // sets the name of the event
	time = t; // sets the time of the event
}
