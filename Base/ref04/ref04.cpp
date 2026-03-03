#include <iostream>
using namespace std;

int func(int n) {
	n++;
	return n;
}

int& func1(int r) {	// 리턴타입이 레퍼런스이다. 출력이 레퍼런스

	r++;
	return r;
}

int main() {

	int num = 10;

	int ret= func(num);
	cout << ret << endl;	// num은 바꾸지 않고 ret으로 새값만 받아오는거임(복사)
	
	int res = func1(num);	// 복사해서 사용
	cout << res << endl;
	
	int& ref = func1(num);	// 참조해서 사용
	cout << ref << endl;

	return 0;
}