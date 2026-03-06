#include <iostream>
using namespace std;

// 전역변수 선언 기본값으로 초기화
bool sw;
char c1;
long l1;
float f1;
double d1;


int main() {
	// 지역 변수 반드시 초기화.
	char first = 'A';
	char second = 48;	// 아스키코드로 0=48번 ,A=65번,a=97번
	bool b1 = -1;

	cout << "first : " << first << endl;
	cout << "second : " << second << endl;
	cout << "bool : " << boolalpha<< b1 << endl;

	cout << "bool : " << sw << endl;
	cout << "char : " << c1 << endl;
	cout << "long : " << l1 << endl;
	cout << "float : " << showpoint<< f1 << endl;
	cout << "double : " << showpoint<< d1 << endl;

	return 0;
}