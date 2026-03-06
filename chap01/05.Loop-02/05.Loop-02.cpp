#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(time(0));
	int num = rand() % 100+1;
	// cout << num << endl;
	int n = 0;
	cout << "랜덤 숫자 맞추기 게임(1~100)" << endl;
	while (n != num) {
		cin >> n;
		if (n > num) {
			cout << "Down 다시 입력하세요 > " << endl;
		}
		else if(n<num){
			cout << "UP 다시 입력하세요 > " << endl;
		}
	}
	cout << "정답입니다, " <<num<< endl;

	return 0;
}

