#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	string pw, name, phonenum, str, str2, line, file_content = "";
	ifstream file_r, file_r2; 
	file << name << " " << phonenum;
	file_r.open("member.txt");
	file_r2.open("member_tel.txt");

	if (file_r.fail()||file_r2.fail()) {
		cout << "���� ����" << endl;
		return -1;
	}
	
	for (int i = 0; i < 3 ; i++) {
		cout << "�̸��� �Է��ϼ���: ";
		cin >> name;
		cout << "����� �Է��ϼ���: ";
		cin >> pw;
		while(getline(file_r, line)) {
			if (line == name + " " + pw) {
				cout << "�α��� ����" << endl;
				cout << "��ȭ��ȣ�� �Է����ּ���: ";
				cin >> phonenum;
				i = 3;
				break;
			}
		}
		if (i == 3)break;
		cout << "�α��� ����" << endl;
	}
	int i = 0;
	while (file_r2 >> str >> str2) {
		i += 1;
		if (str != name) {
			file_content += str + " " + str2;
		}
		else if (str == name) {
			file_content += name + " " + phonenum;
		}
	}
	ofstream file("member_tel.txt");
	file << name << " " << phonenum;
}