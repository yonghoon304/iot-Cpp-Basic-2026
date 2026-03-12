#include <list>
#include <iostream>
using namespace std;

int main() {
	list <int> l;
	// 링크드 리스트는 선형 구조로 데이터를 저장하는 구조

	l.push_back(10);	// 데이터 끝에 추가
	l.push_front(5);	
	l.push_back(5);
	l.push_front(20);

	for (int x : l) {
		cout << x << " ";
	}cout<<endl;

}