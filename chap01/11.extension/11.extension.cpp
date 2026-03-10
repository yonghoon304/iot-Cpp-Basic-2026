#include <iostream>
using namespace std;

class Parent {
private:
	long id;
public:
	void setId(long id);
	long getId() {
		return id;
	}
	Parent(long id);
};
void Parent::setId(long id) {
	this->id = id;
}
Parent::Parent(long id) {
	if (id >= 100000L && id <= 999999L) {
		this->id = id;
	}
	else {
		this->id = 0L;
	}
}





class Child :public Parent {
private :
	double tech_level;
public:
	void setTechLevel(double tech_level);
	double getTechLevel();
	Child(long id, double tech_level);
	Child();
};

Child::Child(long id, double tech_level) :Parent(id) {	// :Parent란 부모생성자를 먼저 실행이라는 뜻.
	this->tech_level = tech_level;
}

void Child::setTechLevel(double tech_level) {
	this->tech_level = tech_level;
}

double Child::getTechLevel()
{
	return tech_level;
}






int main()
{
	Child c;
	c.setId(2222L);
	cout << "Child id : " << c.getId() << endl;;

	cout << "Child의 기술 수준: " << c.getTechLevel() << endl;
	

	return 0;
}


