#include <set>
#include<iostream>
#include <vector>
using namespace std;

int main() {
	// 중복된 원소를 허용하지 않고 자동으로 정렬되는 자료구조입니다.
	set<int> s;

	s.insert(10);
	s.insert(10);
	s.insert(20);

	for (int x : s) {
		cout << x << " ";
	}cout << endl;

	// 값 찾기
	// find 함수는 찾는 값이 존재하면 해당 원소의 반복자를 반환하고, 존재하지 않으면 end() 반복자를 반환합니다.
	if (s.find(10) != s.end()) {
		cout<<"10이 존재합니다"<<endl;
	}
	if (s.find(30) == s.end()) {
		cout << "30이 존재하지 않습니다" << endl;
	}
	set<int, greater<int>> s2;	// 내림차순 정렬
	s2.insert(10);
	s2.insert(20);
	s2.insert(30);

	for (int x : s2) {
		cout << x << " ";
	}
	// 벡터에서 set으로 변환
	vector<int> v = { 2,3,4,5,1 };
	set<int> s3(v.begin(), v.end());
	
}