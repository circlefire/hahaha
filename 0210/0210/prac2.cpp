#include<iostream>
using namespace std;

class Shape {
protected:
	virtual void draw() = 0;
};

class Circle : public Shape {
public:
	void draw() {
		cout << "���� �׸��ϴ�.\n";
	}
};

class Rect : public Shape {
public:
	void draw() {
		cout << "���簢���� �׸��ϴ�.\n";
	}
};

class Tria : public Shape {
public:
	void draw() {
		cout << "�ﰢ���� �׸��ϴ�.\n";
	}
};

int main() {
	Circle cir;
	Rect rec;
	Tria tri;
	cir.draw();
	rec.draw();
	tri.draw();
}