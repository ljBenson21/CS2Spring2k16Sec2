#ifndef COURSE_H_
#define COURSE_H_
#include <string>
using namespace std;

class course
{
private:
	string courseName;
	string* students;
	int numberOfStudents;
	int capacity;
public:
	course(const string& courseName, int capacity);
	course();
	string getCourseName() const;
	void addStudent(const string& name);
	void dropStudent(const string& name);
	string* getStudents() const;
	int getNumberOfStudents()const;

};
#endif 

