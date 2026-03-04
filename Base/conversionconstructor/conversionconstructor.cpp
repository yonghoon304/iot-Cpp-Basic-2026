// 변환 생성자

#include <iostream>

class Time {
	int hour;
	int min;
	int sec;

public:
	Time() {
		};
	Time(int abssec) {
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}
	void showTime() {
		printf("입력한 시간은 %d시, %d분, %d초 입니다. ", hour, min, sec);
	}
};

int main() {
	Time t(50000);
	t.showTime();

	return 0;
}