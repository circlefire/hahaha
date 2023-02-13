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
		cout << flavor << "�� " << name << "�Դϴ�." << endl;
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
		cout << shape << "��� " << name << "�Դϴ�." << endl;
	}
};

int main() {
	Snack* snackBasket[4] = { new Candy("����","1000��","û����","����"), new Chocolate("�׸�","1500��","�������ݸ�","������"), new Candy("����","1900��","����ī��","���"), new Chocolate("���׶��","800��","������","�Ե�") };
	for (int i = 0; i < 4; i++) {
		snackBasket[i]->info();
	}
	for (int i = 0; i < 4; i++) {
		delete snackBasket[i];
	}
}