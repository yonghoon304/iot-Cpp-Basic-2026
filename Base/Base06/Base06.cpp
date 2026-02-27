// const

#include <iostream>
using namespace std;
int main(void) {
	//int num1 = 10;
	//num1 = 20;
	//cout << num1 << endl;
	int num = 20;

	const int* p1 = &num;
	cout << *p1<< endl;
	cout << num << endl;

	// *p1 = 10; 오류
	int num1 = 22;
	p1 = &num1;	// 데이터값말고 주소를 바꾸는건 가능하다.

	cout << *p1 << endl;

	int x = 40;



	int* const y = &x;



	*y = 50;
	// y = &num1;	데이터값 말고 주소를 바꾸는게 불가능
	cout << *y << endl;

	// 앞뒤로 const 둘 다 붙이기가능 그럼 값,주소 둘다 변경 불가능.

	return 0;
}