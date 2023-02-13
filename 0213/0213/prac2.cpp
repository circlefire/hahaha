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
		cout << flavor << "�� ����" << endl;
	}
};

class Chocolate : public Snack {
public:
	string shape;
	Chocolate(string shape) {
		this->shape = shape;
	}
	void info() {
		cout << shape << "��� ���ݸ�"  << endl;
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
		cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ�.( 1: ����, 2: ���ݸ�, 0: ���� ) : ";
		cin >> mode;
		if (mode == 1) {
			cout << "���� �Է��ϼ���: ";
			cin >> flavor;
			Snack* s = new Candy(flavor);
			Candy* s1 = (Candy*)s;
			snacks.push_back(s1);
		}
		else if (mode == 2) {
			cout << "����� �Է��ϼ���: ";
			cin >> shape;
			Snack* s = new Chocolate(shape);
			Chocolate* s1 = (Chocolate*)s;
			snacks.push_back(s1);
		}
		else if (mode == 0) {
			cout << "���� �ٱ��Ͽ� ���� ���� Ȯ���ϱ�!\n���� �ٱ��Ͽ� ��� ������ ������ " << Snack::get_count() << "�� �Դϴ�.\n";
			size = snacks.size();
			for (int i = 0; i < size; i++) {
				snacks.at(i)->info();
			}
			break;
		}
		else {
			cout << "0~2 ������ ���ڸ� �Է��ϼ���.\n";
		}
	}


	for (int i = 0; i < size; i++) {
		delete snacks.at(i);
	}
	for (int i = 0; i < size; i++) {
		snacks.pop_back();
	}

}