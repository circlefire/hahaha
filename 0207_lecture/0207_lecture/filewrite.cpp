#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	string pw, name, phonenum, str, str2;
	string line = " ";
	string file_content = "";
	ifstream file_r;
	ofstream file("member.txt", ios::out | ios::app);
	ofstream file2("member_tel.txt");
	cout << "�̸��� �Է��ϼ���: ";
	cin >> name;
	cout << "����� �Է��ϼ���: ";
	cin >> pw;
	file_r.open("member.txt");
	if (file_r.fail()) {
		cout << "���� ����" << endl;
		return -1;
	}
	while (getline(file_r, line)) {
		int i = 0;
		i += 1;
		if (line == name + " " + pw) {
			cout << "�α��� ����" << endl;
			cout << "��ȭ��ȣ�� �Է����ּ���: ";
			cin >> phonenum;

			if (file2.fail()) {
				cout << "���� ����" << endl;
				return -1;
			}


			ifstream file_R("member_tel.txt");
			while (file_R >> str >> str2) {
				int j = 0;
				j += 1;
				if (str == name) {
					file_content += name + " " + phonenum + "\n";
				}
				else file_content += str + " " + str2 + "\n";
			}
			file2 << file_content;

			break;
		}
		else if (i == 4) {
			cout << "�α��� ����";
		}

	}
	file_r.close(); // file ����
}