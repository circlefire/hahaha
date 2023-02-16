#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main() {
	int num, unum1, unum2, unum3, comnum, com[3] = {};
	srand(time(NULL));

	cout << "야구 게임~!~!~!\n";

	int strike = 0;
	int ball = 0;
	int count = 0;
	bool is_dup = false;

	while (count < 3) {
		is_dup = false;
		num = rand();
		comnum = num % 9 + 1;

		for (int i = 0; i < count; i++) {
			if (com[i] == comnum) {
				is_dup = true;
				break;
			}
		}
		if (!is_dup) {
			com[count] = comnum;
			//cout << comnum << " ";
			count++;
		}
	}

	bool is_error = false;
	count = 0;
	while (!is_dup) {
		count++;
		cout << "1~9 사이의 숫자 3개를 입력 하세요(이외의 숫자: 종료): ";
		cin >> unum1 >> unum2 >> unum3;
		int user[3] = { unum1, unum2, unum3 };
		if ((unum1 < 0 || unum1 > 9) || (unum2 < 0 || unum2 > 9) || (unum3 < 0 || unum3 > 9)) {
			cout << "게임 종료";
			is_error = true;
			break;
		}
		if (unum2 == unum1||unum2==unum3||unum1==unum3) {
			cout << "서로 다른 숫자를 입력하세요.\n";
		}
		for (int i= 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (com[i] == user[j]) {
					if (i == j) {
						strike++;
					}
					else ball++;
				}
			}
		}
		cout << "Strike: " << strike << "          Ball: " << ball << endl;
		if (strike == 3) {
			break;
		}
		strike = 0;
		ball = 0;
	}
	if (is_error == false) {
		cout << count << "번 만에 맞췄습니다!";
	}
}