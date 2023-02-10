#include <iostream>
using namespace std;

class Snack {
protected:
	string name, company;
	int cost;
public:
	void get_name() {
		cout << name <<endl;
	}
};

class Candy : public Snack {
	string taste;
public:
	Candy(string taste, int cost, string name, string company) {
		this->taste = taste;
		this->cost = cost;
		this->name = name;
		this->company = company;
	}
};

class Chocolate : public Snack {
	string shape;
public:
	Chocolate(string shape, int cost, string name, string company) {
		this->shape = shape;
		this->cost = cost;
		this->name = name;
		this->company = company;
	}
};



int main() {
	Snack snackBasket[4] = { Candy("�����",500,"����ī��","�Ե�"),Candy("������",500,"����ĳ��","�Ե�"),Chocolate("�����",1000,"������","����"),Chocolate("�� ���",1200,"�����ην�","���") };
	for (int i = 0; i < 4; i++) {
		snackBasket[i].get_name();
	}
}