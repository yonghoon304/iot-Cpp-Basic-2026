#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
// 셋데이터> 입력 아이디 이름 나이 ,겟데이터 불러오기

class Inf {
private:
	char id[20];
	char name[20];
	int age;

public:
	void setData(const char*aid,const char*aname,int aage) {
		strcpy(id , aid);
		strcpy(name, aname);
		age = aage;
	}
	void getData() {
		std::cout << "id : " << id << " , name : " << name << " , age : " << age << std::endl;
	}
};


int main() {
	Inf obj;	// 디폴트 생성자 호출
	obj.setData("dydgns304", "최용훈", 28);
	obj.getData();


	return 0;
}