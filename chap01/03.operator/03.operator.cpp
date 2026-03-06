#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int n1 = 1;
    int n2 = 2;
    n1++;
    n1 = n1 + 1;
    n1 += 1;
    
    int sum = n1 + n2;

    cout << "sum : " << sum << endl;
    cout << (n1 > n2 ? "big" : "small") << endl;
    sum += n1 * n2;
    cout << "sum : " << sum << endl;

    n1 = 1; n2 = 2;
    cout << (n1 & n2) << endl;  // 비트연산
    int n3 = 10;
    int n4 = 20;
    n4 += n3 *= 40;
    cout << n4 << endl;

    cout << hex << 255 << endl;
    cout << dec << 255 << endl;
    cout << oct << 255 << endl;
    cout << bitset<8>(10) << endl;

    cout <<showbase<< hex << 255 << endl;
    cout << showbase << dec << 255 << endl;
    cout << showbase << oct << 255 << endl;
    cout << showbase << bitset<8>(10) << endl;


    return 0;
}
