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
	Snack snackBasket[4] = { Candy("µþ±â¸À",500,"¸»¶ûÄ«¿ì","·Ôµ¥"),Candy("¿ìÀ¯¸À",500,"¸»·©Ä³¿ì","·Ôµ¥"),Chocolate("º°¸ð¾ç",1000,"»©»©·Î","ÇØÅÂ"),Chocolate("±¸ ¸ð¾ç",1200,"»©·¡·Î·Î½¦","³ó½É") };
	for (int i = 0; i < 4; i++) {
		snackBasket[i].get_name();
	}
}