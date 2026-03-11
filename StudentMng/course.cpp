/**************************************************************
 * Course Ŭ������ ���� ����                                  *
 **************************************************************/
#include "course.h"

 // ������
Course::Course(string nm, int ut)
	: name(nm), units(ut)
{
	roster = new CourseRoster;
}
// �Ҹ���
Course::~Course()
{
}
// getName �Լ��� ����
string Course::getName() const
{
	return name;
}
// addStudent �Լ��� ����
void Course::addStudent(string name)
{
	roster->addStudent(name);
}
// getRoster �Լ��� ����
CourseRoster* Course::getRoster() const
{
	return roster;
}
// print �Լ��� ����
void Course::print() const
{
	cout << "�ڽ� �̸�: " << name << endl;
	cout << "������ ����: " << units << endl;
	roster->print();
}