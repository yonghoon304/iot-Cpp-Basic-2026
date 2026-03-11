#include <iostream>
using namespace std;

int main() {
	try {
		cout << "1" << endl;
		cout << "2" << endl;
		cout << "3" << endl;
		cout << "4" << endl;
		throw exception("강제 예외 발생");
		cout << "5" << endl;
	}

	catch (const std::exception&) {
		cout << "6" << endl;
	}
	catch (int) {
		cout << "7" << endl;
	}
	catch (const char* e) {
		cout << "8" << endl;
	}cout << "9" << endl;




}