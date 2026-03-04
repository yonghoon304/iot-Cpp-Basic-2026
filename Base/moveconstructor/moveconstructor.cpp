/*
// 이동 생성자
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	char name[30];
	int age;

public:
	Human(const char* name,int age) {
		cout << "** 일반 생성자 호출" << endl;
		strcpy(this -> name,name);
		this->age = age;
	}
	Human(const Human&other) {
		cout << "** 복사 생성자 호출" << endl;
		strcpy(this->name, other.name);
		this->age = other.age;
	}
	Human(Human&& other)noexcept {	// 예외를 방출하지 않는 함수
		cout << "**이동 생성자 호출 **" << endl;
		strcpy(this->name, other.name);
		this->age = other.age;

		// other,name=nullptr	배열은 실제 복사가 이루어진다.
		other.age = 0;		// other객체가 더 이상 유효한 데이터를 가지지 않도록 보장한다.
	}

	void showHuman() {
		cout << "이름 : " << name << "나이 : " << age << endl;
	}

};

int main() {
	Human h("최용훈", 28);	// 일반 생성자 호출
	h.showHuman();

	Human cph(h);		// 복사 생성자 호출
	cph.showHuman();

	Human cph2(move(h));	// 이동 생성자 호출		
	cph2.showHuman();
	return 0;
}
*/