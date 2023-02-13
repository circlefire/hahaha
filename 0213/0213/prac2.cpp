#include<iostream>
#include<vector>
using namespace std;

class Snack {
protected:
	string price, name, company;
	static int count;
public:
	Snack() {
		count++;
	}
	static int get_count() {
		return count;
	}
	virtual void info() {
		cout << name << endl;
	}
};

class Candy : public Snack {
public:
	string flavor;
	Candy(string flavor) {
		this->flavor = flavor;
	}
	void info() {
		cout << flavor << "맛 사탕" << endl;
	}
};

class Chocolate : public Snack {
public:
	string shape;
	Chocolate(string shape) {
		this->shape = shape;
	}
	void info() {
		cout << shape << "모양 초콜릿"  << endl;
	}
};

int Snack::count = 0;

int main() {
	int mode = 1, size = 0;
	string flavor, name, company, shape;
	vector<Snack*> snacks;
	vector<Chocolate*> chocolate;
	vector<Candy*> candy;


	while (mode != 0) {
		cout << "과자 바구니에 추가할 간식을 고르시오.( 1: 사탕, 2: 초콜릿, 0: 종료 ) : ";
		cin >> mode;
		if (mode == 1) {
			cout << "맛을 입력하세요: ";
			cin >> flavor;
			Snack* s = new Candy(flavor);
			Candy* s1 = (Candy*)s;
			snacks.push_back(s1);
		}
		else if (mode == 2) {
			cout << "모양을 입력하세요: ";
			cin >> shape;
			Snack* s = new Chocolate(shape);
			Chocolate* s1 = (Chocolate*)s;
			snacks.push_back(s1);
		}
		else if (mode == 0) {
			cout << "과자 바구니에 남긴 과자 확인하기!\n과자 바구니에 담긴 간식의 개수는 " << Snack::get_count() << "개 입니다.\n";
			size = snacks.size();
			for (int i = 0; i < size; i++) {
				snacks.at(i)->info();
			}
			break;
		}
		else {
			cout << "0~2 사이의 숫자를 입력하세요.\n";
		}
	}


	for (int i = 0; i < size; i++) {
		delete snacks.at(i);
	}
	for (int i = 0; i < size; i++) {
		snacks.pop_back();
	}

}