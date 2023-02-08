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
	cout << "width¿Í height ÀÔ·Â: ";
	cin >> width >> height;
	Rectangle rect(width, height);
	cout << "³ÐÀÌ: " << rect.area();

}