#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "person.h"
using namespace std;

class Professor : virtual public Person {
protected:
	double salary;
public:
	Professor(string name, double salary);
	~Professor();
	void print();

};


#endif
