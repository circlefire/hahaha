#include<iostream>
#include<fstream>
#include<string>

using namespace std;



int main() {
	ifstream file;
	file.open("111.txt"); // 파일명에 해당하는 파일 열기
	//file.fail(); // 파일 여는것에 실패하면 true. 성공하면 false.
	if (file.fail()) {
		cout << "파일 없음" << endl;
		return -1;
	}
	
	cout << "아무 글자" << endl;

	string str, str2, line;
	//file >> str >> str2; // 파일의 내용을 str에 저장. 공백(띄어쓰기, 엔터) 전까지만 읽어옴.
	/*while (file >> str >> str2) {
		cout << str << " " << str2;
		cout << endl;
	}*/
	//	cout << str << " " << str2;

	//getline(file, line); // file의 내용을 한 줄씩 읽어서 line에 저장
	while (getline(file, line)) {
		cout << line;
		cout << endl;
	}

	file.close(); // file 종료
}