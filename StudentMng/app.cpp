/**************************************************************
 * 占쏙옙占?클占쏙옙占쏙옙占쏙옙 占쏙옙占쏙옙求占?占쏙옙占시몌옙占쏙옙占싱쇽옙 占쏙옙占쏙옙                   *
 **************************************************************/
#include "registrar.h"

int main()
{
	// Registrar 占쏙옙체 占싸쏙옙占싹쏙옙화
	Registrar registrar;
	// Student 占쏙옙체 占싸쏙옙占싹쏙옙화
	Student student1("John");
	Student student2("Mary");
	Student student3("Ann");
	// Course 占쏙옙체 3占쏙옙 占싸쏙옙占싹쏙옙화
	Course course1("CIS101", 4);
	Course course2("CIS102", 3);
	Course course3("CIS103", 3);
	// Registrar 占쏙옙체占쏙옙 占쏙옙占쏙옙占쏙옙占?占싻삼옙占쏙옙 占쏙옙占쏙옙 占쏙옙占쏙옙 占쏙옙占?
	registrar.enroll(student1, course1);
	registrar.enroll(student1, course2);
	registrar.enroll(student2, course1);
	registrar.enroll(student2, course3);
	registrar.enroll(student3, course1);
	// Student 占쏙옙체占쏙옙 占쏙옙占쏙옙 占쏙옙占?
	student1.print();
	student2.print();
	student3.print();
	// Course 占쏙옙체占쏙옙 占쏙옙占쏙옙 占쏙옙占?
	course1.print();
	course2.print();
	course3.print();
	return 0;
}