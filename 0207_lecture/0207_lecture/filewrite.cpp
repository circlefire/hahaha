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
		cout << "파일 없음" << endl;
		return -1;
	}
	
	for (int i = 0; i < 3 ; i++) {
		cout << "이름을 입력하세요: ";
		cin >> name;
		cout << "비번을 입력하세요: ";
		cin >> pw;
		while(getline(file_r, line)) {
			if (line == name + " " + pw) {
				cout << "로그인 성공" << endl;
				cout << "전화번호를 입력해주세요: ";
				cin >> phonenum;
				i = 3;
				break;
			}
		}
		if (i == 3)break;
		cout << "로그인 실패" << endl;
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