#include <iostream>
using namespace std;

class Circle {
private:
	double radius;
public:
	double getRadius() const { return radius; }
};

int main() {
	Circle c1;
	cout << c1.getRadius() << endl;

	return 0;
}
