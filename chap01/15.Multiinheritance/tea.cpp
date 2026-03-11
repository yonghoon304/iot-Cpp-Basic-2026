#include "tea.h"

Tea::Tea(string name, double gpa, double salary)
	:Person(name), Professor(name, salary), Student(name, gpa) {
}
Tea::~Tea() {

}
void Tea::print() {
	cout << "Teaching Assistant Name : " << name << endl;
	cout << "GPA : " << gpa << endl;
	cout << "Salary : " << salary << endl;
	
}