#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Inf {
private:
	int id;
	char name[20];
	int age;

public :
	Inf(int aid, const char* aname, int aage);
	void getData();
};
Inf::Inf(int aid, const char* aname, int aage) {
	id = aid;
	strcpy(name, aname);
	age = aage;
}


void Inf::getData(){
	std::cout << "id : " << id << " , name : " << name << " , age : " << age << std::endl;
}

int main() {
	Inf obj(001, "최용훈", 28);
	obj.getData();

	return 0;
}
