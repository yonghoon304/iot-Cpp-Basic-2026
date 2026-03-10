#include <iostream>
#include "person.h"
using namespace std;

/* // 대입을 통해 초기화하는 방법
Person::Person() {
	identity = 0;
}*/

// 멤버 초기화 리스트를 이용하는 방법 <- 이걸 추천함
Person::Person() : identity(0) {	
}

Person::Person(long identity) : identity(identity) {
	// assert : 실행 중 특정 조건이 반드시 참이어야 한다는 것을 검사하는 디버깅용 매크로 함수
	// 거짓이면 중단한다.
	assert(identity > 100000000 && identity < 999999999);
}
Person::Person(const Person& other) : identity(other.identity) {

}
Person::~Person() {

}
void Person::print()const {
	cout << "indentity : " << identity << endl;
}
