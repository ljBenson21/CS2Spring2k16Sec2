#include <iostream>
#include "Course.h"
using namespace std;

course::course(const string& courseName, int capacity)
{
	numberOfStudents = 0; 
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

course::course()
{
	delete[] students;
}

string course::getCourseName()const
{
	return courseName;
}

int* doubleCapacity(const int* list, int size)
{
	int* doubleArray = new int[size * 2];

	for (int i = 0; i < 2 * size; i++)
		doubleArray[i] = NULL;

	for (int i = 0; i < size; i++)
		doubleArray[i] = list[i];


	cout << endl;

	return doubleArray;
}

void course::addStudent(const string& name)
{
	students[numberOfStudents] = name;
	numberOfStudents++;
	
}


void course::dropStudent(const string& name)
{
	// Left as an exercise
}

string* course::getStudents() const
{
	return students;
}

int course::getNumberOfStudents() const
{
	return numberOfStudents;
}
