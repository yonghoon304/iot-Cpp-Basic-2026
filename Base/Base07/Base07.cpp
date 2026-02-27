// 포인터 변수 대상의 참조자 선언

#include <iostream>
using namespace std;

int main(void) {
	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;

	int& ref = num;
	int* (&pref) = ptr;
	int** (&dpref) = dptr;
	// ptr이 포인터(*)변수이기에 = 앞도 *
	// dptr은 이중포인터이기에 앞에 **



	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;



	return 0;
}