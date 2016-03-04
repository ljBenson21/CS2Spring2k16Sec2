#include <iostream>
#include <string>
#include "Event.h"
#include "Venue.h"
using namespace std;


Event::Event(int t, string name) // done
{
	title = name; // sets the name of the event
	time = t; // sets the time of the event
}

void setTime(int t) // asks the user what the time of the event is
{
	string name;
	cout << "Please enter a time for the event. ";
	cin >> t;
}
void setTitle(string name) // asks user what the title of the event is
{
	cout << "What is the name of this event? ";
	getline(cin, name);
}
Event::Event() // done
{
	title = "free";
	time = -1;
}