#include<iostream>
#include<string>
using namespace std;

class Snack {
protected:
	string price, name, company;
public:
	virtual void info() {
		cout << name << endl;
	}
};

class Candy : public Snack {
public:
	string flavor;
	Candy(string flavor, string price, string name, string company) {
		this->flavor = flavor;
		this->price = price;
		this->name = name;
		this->company = company;
	}
	void info() {
		cout << flavor << "맛 " << name << "입니다." << endl;
	}
};

class Chocolate : public Snack {
public:
	string shape;
	Chocolate(string shape, string price, string name, string company) {
		this->shape = shape;
		this->price = price;
		this->name = name;
		this->company = company;
	}
	void info() {
		cout << shape << "모양 " << name << "입니다." << endl;
	}
};

int main() {
	Snack* snackBasket[4] = { new Candy("포도","1000원","청포도","해태"), new Chocolate("네모","1500원","가나초콜릿","오리온"), new Candy("딸기","1900원","말랑카우","농심"), new Chocolate("동그라미","800원","빼빼로","롯데") };
	for (int i = 0; i < 4; i++) {
		snackBasket[i]->info();
	}
	for (int i = 0; i < 4; i++) {
		delete snackBasket[i];
	}
}