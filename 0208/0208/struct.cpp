#include<iostream>
using namespace std;
struct Rectangle {
	double width;
	double height;
};

int main() {
	Rectangle A;
	cout << "가로, 세로 길이를 입력하세요: ";
	cin >> A.width >> A.height;
	cout << "넓이는: " << A.width * A.height << endl;
}