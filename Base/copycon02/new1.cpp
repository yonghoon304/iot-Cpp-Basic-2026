/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
			C 버전
	
	int size;
	int* arr;
	printf("배열 크기를 입력하시오 : \n");
	scanf("%d", &size);
	arr = (int*)malloc(size*sizeof(int));

	printf("%d개의 숫자를 입력하시오.\n",size);
	for (int i = 0; i < size; i++) {
		printf("%d 번째 숫자 : ", i+1);
		scanf("%d", arr+i);
	}
	for (int i = 0; i < size; i++) {
		if (arr != nullptr) {	// 역참조 경고 처리
			// printf("%d\n", *(arr + i));
			printf("%d\n", arr[i]);
		}
	}
	*/

	/*		C++ 버전
	int size;
	int* arr;
	cout << "배열크기 : ";
	cin >> size;

	arr = new int[size];	// 동적 할당 : 포인턴 = new 자료형

	cout << "만든 배열 크기 : " << sizeof(int) * size << endl;

	delete[] arr;	// 동적 할당 배열 해제

	return 0;
}
	*/