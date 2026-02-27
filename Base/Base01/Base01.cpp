#include <iostream>

int main(void) {
	int num = 20;
	// printf("num : %d",num);  cpp에서도 가능함

	// endl쪽부터 왼쪽으로 cout까지 출력
	// std::endl이 \n 역할도 한다.
	std::cout << "Hello World" << std::endl;
	std::cout << "Hello " << "World" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;

	// cin>> 입력문.
	int val1;
	std::cout << "첫 번째 숫자입력 : ";
	std::cin >> val1;

	int val2;
	std::cout << "두 번째 숫자입력 : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈결과 : " << result << std::endl;

	// 이름과 나이
	std::string name;
	int age;
	std::cout << "이름과 나이 : ";
	std::cin >> name>>age;	// 이렇게도 가능
	// std::cout << "나이 : ";
	// std::cin >> age;;

	std::cout << "이름과 나이 : " << name <<' '<< age << std::endl;


	//배열 기반의 문자열 입출력
	char name1[100];
	char lang[200];

	std::cout << "이름이 무엇입니까? ";
	std::cin >> name1;
	std::cout << "프로그래밍 언어는? ";
	std::cin >> lang;
	std::cout << "내 이름은 " << name << "입니다 \n";
	std::cout << "제일 좋아하는 언어는 " << lang << "입니다." << std::endl;
	// std::endl는 줄바꿈 + 버퍼를 비움

	return 0;
}