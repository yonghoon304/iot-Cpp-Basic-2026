#ifndef TEA_H
#define TEA_H
#include "student.h"
#include "professor.h"

using namespace std;

class Tea : public Professor ,public Student{

public:
	Tea(string name, double gpa, double salary);
	~Tea();
	void print();

};


#endif
