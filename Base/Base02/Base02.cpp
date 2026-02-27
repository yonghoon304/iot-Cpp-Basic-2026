// 디폴트값

#include <iostream>

int Adder(int num1 = 1,int num2 = 2);
// 디폴트값이 있는 함수 선언

int main(void) {
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	// 5만 넣으면 왼쪽 num1에 5가 삽입된다.
	std::cout << Adder(3, 5) << std::endl;


	return 0;
}
int Adder(int num1, int num2) {
	return num1 + num2;
}