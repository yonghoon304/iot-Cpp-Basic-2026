#include <iostream>
using namespace std;

int main() {
	for (int k = 0; k < 3;k++) {
		for (int i = 1; i <= 9; i++) {
			for (int j = 2+3*k; j <= 4+3*k&&j<=9; j++) {
				cout << j << " X " << i << "=" << i * j << "\t";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}