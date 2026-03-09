#include <iostream>
using namespace std;

class A {
public:
    int x;
    A(int value) {
        x = value;
        cout << "일반 생성자" << endl;
    }
    A(const A& other) {
        x = other.x;
        cout << "복사 생성자" << endl;
    }
};

int main()
{
    A a1(10);
    A a2 = a1;
    cout << "a1 value : " << a1.x << endl;
    cout << "a2 value : " << a2.x << endl;
    cout << "a2 address : " << &a1 << endl;
    cout << "a2 address : " << &a2 << endl;

}
