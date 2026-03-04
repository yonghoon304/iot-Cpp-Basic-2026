#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


class Person {
	char  m_name[20];
	int m_age;
public:
	Person(const char *name,int age) {	// constructor 생성자
		printf("constructor\n");
		strcpy(m_name, name);
		m_age = age;
	}
	Person(const Person &other) {	// copy constructor 참조(&)가 와야함, 포인터가 아닌 일반 변수는 그대로 복사.
		printf("copy constructor\n");
		strcpy(m_name, other.m_name);
		m_age = other.m_age;
	}
	~Person() {		// '~' -> 소멸자
		printf("나는 소멸자입니다\n");
	}
	void showPerson() {
		printf("이름 : %s, 나이 : %d\n",m_name,m_age);
	}
};

int main() {
	Person man("최용훈", 28);
	man.showPerson();

	Person copy(man);
	copy.showPerson();

	return 0;
}