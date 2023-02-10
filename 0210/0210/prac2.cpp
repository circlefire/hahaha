#include<iostream>
using namespace std;

class Shape {
protected:
	virtual void draw() = 0;
};

class Circle : public Shape {
public:
	void draw() {
		cout << "원을 그립니다.\n";
	}
};

class Rect : public Shape {
public:
	void draw() {
		cout << "직사각형을 그립니다.\n";
	}
};

class Tria : public Shape {
public:
	void draw() {
		cout << "삼각형을 그립니다.\n";
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