#include <iostream>
#include <string>
using namespace std;

class Product {
private:
	int price;
	string name;
public:
	Product(int p,string n) : price(p),name(n) {
	}
	int getPrice() { return price; }
};

class TV : public Product {
public:
	Tv();
};

class Customer {
public:
	int money = 1000;
	// 1번방법 오버로딩
	// void buy(TV tv) {money -= tv.price;}
	// void buy(Audio audio) {	money -= audio.price;}
	// void buy(Computer com) {money -= com.price;}
	// 너무 비효율적임

	// 2번방법 템플릿
	// template<typename T>
	// void buy(T item) {money -= item.price;}
	
	// 3번방법 상속
	void buy(Product& product) {
		money-=product.getPrice
	}
};


int main(){
	Customer customer;
	TV tv;
	Audio audio;
	Computer com;

	// Typecasting
	customer.buy(tv);
	customer.buy(audio);
	customer.buy(com);
	cout << "Customer's remaining money: " << customer.money << endl;
	return 0;
}