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
	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "비번을 입력하세요: ";
	cin >> pw;
	file_r.open("member.txt");
	if (file_r.fail()) {
		cout << "파일 없음" << endl;
		return -1;
	}
	while (getline(file_r, line)) {
		int i = 0;
		i += 1;
		if (line == name + " " + pw) {
			cout << "로그인 성공" << endl;
			cout << "전화번호를 입력해주세요: ";
			cin >> phonenum;

			if (file2.fail()) {
				cout << "파일 없음" << endl;
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
			cout << "로그인 실패";
		}

	}
	file_r.close(); // file 종료
}