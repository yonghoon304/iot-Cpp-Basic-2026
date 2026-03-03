// C++식 객체 클래스 2  private
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


class Human {
private:	// 외부에서 접근 불가
	char name[20];
	int age;
	char job[20];

public :	// 외부에서 접근 가능 
	Human(const char* aname, int aage, const char* ajob) {
		strcpy(name,aname);		// name = aname
		age = aage;
		strcpy(job ,ajob);
	}
	void show() {
		std::cout << "이름 : " << name << " , 나이 : " << age << " , 직업 : " << job << std::endl;
	}

};


int main() {

	Human h("최용훈",28,"학생");
	h.show();


	return 0;
}