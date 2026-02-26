#include <stdio.h>

int a;
int global_c = 100;

int func() {

	return 1;
}
int main(void) {

	int b;
	static int c;
	const int d=10;
	char arr[20] = "hi";
	char* parr = "hong";

	// 자료형 별로 메모리 위치 차이
	printf("global_a : %p\n", &a);
	printf("local b : %p\n", & b);
	printf("static c : %p\n", &c);
	printf("global_c : %p\n", &global_c);
	printf("const d : %p\n", &d);
	printf("array : %p\n", arr);
	printf("parr : %p\n", parr);



	return 0;
}

/* 메모리구조
	data segment : stack, heap, data
	code segment : s

*/


