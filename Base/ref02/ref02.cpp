#include <iostream>
using namespace std;

int main() {
	int num = 10;
	int& ref = num;
	int* pnum = &num;

	num++;
	ref++;
	(*pnum)++;

	cout << "num : " << num << endl;
	cout << "ref : " << ref << endl;
	cout << "*pnum : " << *pnum << endl;

	cout << "&num : " << &num << endl;
	cout << "&ref : " << &ref << endl;

	return 0;					
}								