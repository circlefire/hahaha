#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ofstream file("member.txt",ios::out|ios::app);
	ifstream file_r;
	string name, pw, pn, str, str2, line="", file_content = "";
	file_r.open("member.txt");

	if (file.fail()||file_r.fail()) {
		cout << "���� ����" << endl;
		return -1;
	}

	cout << "�̸��� �Է��ϼ���: ";
	cin >> name;
	cout << "����� �Է��ϼ���: ";
	cin >> pw;

	bool flag = 0, flag2=0;
	while (getline(file_r, line)) {
		if (line == name + " " + pw) {
			flag = 1;
		}
	}
	if (flag == 1) {
		cout << "�α��� ����\n��ȭ��ȣ�� �Է����ּ���: ";
		ofstream file2("member_tel.txt");
		if (file2.fail()) {
			file2 << name << " " << pw;
		}
		else {
			file_r.open("member_tel.txt");
		cin >> pn;
			while (file_r>>str>>str2) {
				if (str == name) {
					flag2 = 1;
				}
				else {
					file_content += str + " " + str2;
				}
			}
			if (flag2 == 0) {
				file2 << file_content << "\n" << name << " " << pn;
			}
			else {
				file2 << file_content;
			}
		}
	}
	else { cout << "�α��� ����"; }


	file.close();
}