#include <iostream>
#include "Course.h"
using namespace std;

int main()
{
	course course1("Data Structures", 10);
	course course2("Database Systems", 15);
	
	course1.addStudent("Peter Jones");
	course1.addStudent("Brain Smith");
	course1.addStudent("Anne Kennedy");

	course2.addStudent("Peter Jones");
	course2.addStudent("Steve Smith");

	cout << "The number of students in Data Structures are " << course1.getNumberOfStudents() << endl;
	string* students = course1.getStudents();

	for (int i = 0; i < course1.getNumberOfStudents(); i++)
		cout << students[i] << ", ";

	cout << "Number of students in Database Systems is " << course2.getNumberOfStudents() << endl;
	students = course2.getStudents();
	for (int i = 0; i < course2.getNumberOfStudents(); i++)
		cout << students[i] << ",";

	return 0;
}