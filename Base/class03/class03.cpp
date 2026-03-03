// C++식 객체 클래스
#include <iostream>


class Human {
public : 
	char name[30];
	int age;
	char job[30];

	void show_data() {

		printf("이름 : %s, 나이 : %d, 직업 : %s", name, age, job);
	}

};


int main() {
//	Human h = { "최용훈",28,"학생" };	// 구조체 변수 선언
	Human h("최용훈", 28, "학생");		// 객체 생성 문법
	h.show_data();

	return 0;
}