#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int month = 0;
	int day = 0;

	cout << "당신의 생일 '월' 과 '일'을 입력하시오" << endl;
	cin >> month>>day;;
	
	if (month >= 3 && month < 6) {
		cout << "당신은 봄에 태어났습니다" << endl;
	}
	else if (month >= 6 && month < 9) {
		cout << "당신은 여름에 태어났습니다" << endl;
	}
	else if (month >= 9 && month < 12) {
		cout << "당신은 가을에 태어났습니다" << endl;
	}
	else if(month ==1 || month == 2 || month == 12){
		cout << "당신은 겨울에 태어났습니다." << endl;
	}
	
	cout << "생일 : " << month << "월" << day << "일" << endl;
	

	return 0;
}