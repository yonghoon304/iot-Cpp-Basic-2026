#include <iostream>
using namespace std;

int main() {
	// 배열의 선언

	int arr[5]; // 크기가 5인 정수형 배열 선언

	// 베열의 초기화
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	
	int arr2[5] = { 1, 2, 3, 4, 5 }; // 배열 선언과 동시에 초기화
	int arr3[] = { 6, 7, 8, 9, 10 }; // 크기를 생략하고 초기화

	cout << "arr의 길이 : " << sizeof(arr) / sizeof(arr[0]) << endl;
	
	cout << "arr2의 길이 : " <<size(arr2) << endl;

	// 배열 요소에 접근
	cout << "---------직접 접근---------" << endl;
	cout << "arr[0] : " << arr[0] << endl;
	cout << "arr[1] : " << arr[1] << endl;

	cout << "---------for문 사용----------" << endl;
	for (int i = 0; i < size(arr); i++) {
		cout << "arr[" << i << "] : " << arr[i] << endl;
	}
	cout << "---------역순으로 출력----------" << endl;
	for (int i = size(arr)-1; i >=0; i--) {
		cout << "arr[" << i << "] : " << arr[i] << endl;
	}
	bool arrBool[] = { true, false, true, false, true, 0,1,-1};


}