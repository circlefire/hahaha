#include<iostream>
#include<fstream>
#include<string>

using namespace std;



int main() {
	ifstream file;
	file.open("111.txt"); // ���ϸ� �ش��ϴ� ���� ����
	//file.fail(); // ���� ���°Ϳ� �����ϸ� true. �����ϸ� false.
	if (file.fail()) {
		cout << "���� ����" << endl;
		return -1;
	}
	
	cout << "�ƹ� ����" << endl;

	string str, str2, line;
	//file >> str >> str2; // ������ ������ str�� ����. ����(����, ����) �������� �о��.
	/*while (file >> str >> str2) {
		cout << str << " " << str2;
		cout << endl;
	}*/
	//	cout << str << " " << str2;

	//getline(file, line); // file�� ������ �� �پ� �о line�� ����
	while (getline(file, line)) {
		cout << line;
		cout << endl;
	}

	file.close(); // file ����
}