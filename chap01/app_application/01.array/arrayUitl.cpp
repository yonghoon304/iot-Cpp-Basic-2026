#include "arrayUitl.h"
#include <iostream>
using namespace std;
template <typename T,size_t N>

void printArray(T(&arr)[N]) {
	for (int i = 0; i < size(arr); i++) {
		cout << "arr[" << i << "] : " << arr[i] << endl;
	}
	cout << endl;
}