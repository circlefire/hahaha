#include<iostream>
using namespace std;
struct Rectangle {
	double width;
	double height;
};

int main() {
	Rectangle A;
	cout << "����, ���� ���̸� �Է��ϼ���: ";
	cin >> A.width >> A.height;
	cout << "���̴�: " << A.width * A.height << endl;
}