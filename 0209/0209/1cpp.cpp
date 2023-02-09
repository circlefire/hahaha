#include<iostream>
using namespace std;

class Shape {
protected:
	int a;
	int b;
public:
	void printInfo() {
		cout << "���� ����: " << a << "�غ��� ����: " << b;
	}
};

class Rectangle : public Shape {
	int cero;
public:
	Rectangle(int a, int b, int cero) {
		this->a = a;
		this->b = b;
		this->cero = cero;
	}
	void area() {
		cout << "����: " << b * cero << endl;
	}
};

class Triangle : public Shape {
	int height;
public:
	Triangle(int a, int b, int height) {
		this->a = a;
		this->b = b;
		this->height = height;
	}
	void area() {
		cout << "����: " << b * height / 2 << endl;
	}
};

int main() {
	int a, b, h;
	while (1) {
		cout << "��ü ����(���� ����(3 or 4), �غ��� ����, ����): ";
		cin >> a >> b >> h;
		if (a == 4) {
			Rectangle rect(a, b, h);
			rect.area();
		}
		else if (a == 3) {
			Triangle tri(a, b, h);
			tri.area();
		}
	}
}