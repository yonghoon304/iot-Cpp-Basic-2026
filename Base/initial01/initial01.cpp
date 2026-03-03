#include <iostream>

int main() {


	int num = 10;	// 복사생성자 호출
	int num1(100);	// 직접초기화

	int num2{ 200 };	// 중괄호 직접 초기화
	int num3 = { 300 };	// 중괄호 복사 초기화, 변수 단위 엄격

	int x1= 3.14 ;
	std::cout << x1 << std::endl;

	return 0;
}