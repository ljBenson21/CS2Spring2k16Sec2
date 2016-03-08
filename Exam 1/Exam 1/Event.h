
#ifndef _EventThing_H_
#define _EventThing_H_
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;


class Event
{
private:
	int time;
	string title;
public:
	Event(); // default name and time of an event or free time available in the venue
	Event(int time, string name); //Defines the title and time of the event
	
	int getTime() { return time; } // returns the time of the event 
	string getTitle() { return title; } // returns the title of the event

	void setTime(int t); // sets the time of the event
	void setTitle(string name); // sets the title of the event
};

#endif