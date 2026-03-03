// 기본 C 구조체
#include <iostream>


typedef struct {
	char name[30];
	int age;
	char job[30];
}Human;

void show_data(Human ah) {
	printf("이름 : %s, 나이 : %d, 직업 : %s", ah.name, ah.age, ah.job);
}

int main() {
	Human h = { "최용훈",28,"학생" };
	show_data(h);

	return 0;
}