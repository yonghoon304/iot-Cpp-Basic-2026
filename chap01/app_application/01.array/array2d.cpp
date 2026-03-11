#include <iostream>
#include "arrayUitl.h"
using namespace std;

int main() {
	int arr[] = { 1,2,3,4,5 };
	int sum = 0;
	for (int i = 0; i < size(arr); i++) {
		sum += arr[i]; sum += arr[i];
	}
	cout << "sum = " << sum << endl;
	cout << "average: " << Static_cast<double>(sum) / size(arr) << endl;

	cout << "sum: " << sum << endl;
	cout << "average: " << static_cast<double>(sum) / size(arr) << endl;

	int arr2[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	printArr(arr2);

	for (int i = 0; i < size(arr2); i++) {
		for (int j = 0; j < size(arr2[i]); j++) {
			cout << setw(2) << (arr2[i][j]) << " ";
		}
		cout << endl;
	}

	return 0;
}