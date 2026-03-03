#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char name[20] = "홍길동";

	char name1[20];
	strcpy(name1, "김영희");


	cout << name << endl;
	cout << name1 << endl;

	char name2[20];
	cout << "이름을 입력하세요 : ";
	cin >> name2;
	cout << name2 << endl;

	return 0;
}