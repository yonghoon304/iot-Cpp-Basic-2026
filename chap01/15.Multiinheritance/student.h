#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"
using namespace std;

class Student : virtual public Person {
protected:
	double gpa;
public:
	Student(string name,double gpa);
	~Student();
	void print();

};


#endif
