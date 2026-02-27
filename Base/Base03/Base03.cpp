// inline 선언
#include <iostream>

inline int SQUARE(int x) {
	return x * x;
}

int main(void) {
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;

	return 0;
}
// 컴파일러가 함수 호출을 실제 코드로 치환하기에 오버헤드가 사라짐 > 성능이 향상됨.
// 복사해서 치환하기에 코드 자체의 크기가 증가 할 수도 있음
// 일반함수와 다르게 자료형에 독립적이지 못하다.