#include <iostream>
using namespace std; // cout ,cin,endl,string,thread
// using std::cout;	// cout만
static int sum;

namespace A {
	void printAll() {
		cout << "A" << endl;
		sum = 10;
	}
}

int main() {
	cout << "hello world " << endl;
	A::printAll();
	unsigned short us = -2367;
	cout << us << endl;

	double x = 23.56;
	int y = 30;
	cout << "암묵적 형변환 : " << x + y << endl;
	cout << "명시적 형변환 : " << static_cast<int>(x) + y << endl;
	cout << "명시적 형변환 : " << (int)(x)+y << endl;

	double num1 =  +numeric_limits<double>::max();
	double num2 =  -numeric_limits<double>::max();
	cout << "부동소수점의 오버플로우 : " << num1 * 1000 << endl;
	cout << "부동소수점의 오버플로우 : " << num2 * 1000 << endl;

	cout << sum << endl;
	return 0;
}

