// Test01

#include <stdio.h>

int n;

int main(void) {
	char arr[5] = "hong";
	char* arr1 = "hong";
	//printf("arr : %s\n", arr);

	//printf("arr[0] : %c\n", arr[0]);
	//printf("arr[1] : %c\n", arr[1]);
	//printf("arr[2] : %c\n", arr[2]);
	//printf("arr[3] : %c\n", arr[3]);

	printf("arr : %p\n", arr);
	printf("arr1 : %p\n", &arr1);
	printf("hong : %p\n", *arr1);
	printf("n : %p\n", &n);


	return 0;
}