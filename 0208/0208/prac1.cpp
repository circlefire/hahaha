#include<iostream>
using namespace std;

class Rectangle {
	double width, height;
public:
	Rectangle(double width, double height) {
		this->width = width;
		this->height = height;
	}
	double area() {
		return width * height;
	}
};

int main() {
	double width=0, height=0;
	cout << "width�� height �Է�: ";
	cin >> width >> height;
	Rectangle rect(width, height);
	cout << "����: " << rect.area();

}