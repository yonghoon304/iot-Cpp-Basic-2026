// using 및 :: 전역변수 접근

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
// 지금부터 cin,cout,endl은 std::를 의미한다는 선언

// using namespace std;

int val = 100;	// 전역변수

int main(void) {
	int num = 20;
	cout << "hello world" << endl;
	int val = 20;	// 지역변수
	val += 3;	// 지역변수 val(20)에 3증가
	::val += 3;	// 전역변수 val(100)에 3증가

	return 0;
}