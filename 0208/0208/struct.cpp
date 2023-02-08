#include<iostream>
using namespace std;
struct Position {
	int x;
	int y;
};

int main() {
	//Position p;
	//p.x = 3;
	//p.y = 4;
	Position p{ 3,4 };
	cout << p.x << " " << p.y << endl;
}