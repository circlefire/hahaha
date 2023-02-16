#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main() {
	int num, unum, comnum, lotto[6]={}, user[6]={};
	srand(time(NULL));

	cout << "숫자는 1~25까지의 숫자만 입력할 수 있습니다.\n";

	int count = 0;
	while (count < 6) {
		bool is_dup = false;
		bool is_wrong = false;
		cout << count + 1 << "번째 번호를 입력하세요: ";
		cin >> unum;

		if (unum < 1 || unum > 25) {
			cout << "잘못된 숫자입니다. 다시 입력해주세요.\n";
			is_wrong = true;
		}

		for (int i = 0; i < count; i++) {
			if (user[i] == unum) {
				is_dup = true;
				cout << "이미 입력된 숫자입니다.\n";
				break;
			}
		}

		if (!is_dup&&!is_wrong) {
			user[count] = unum;
			count++;
		}
	}

	cout << "--------------------------------------\n";
	cout << "당첨번호 공개!\n";
	count = 0;
	while (count < 6) {
		bool is_dup = false;
		num = rand();
		comnum = num % 25 + 1;

		for (int i = 0; i < count; i++) {
			if (lotto[i] == comnum) {
				is_dup = true;
				break;
			}
		}
		if (!is_dup) {
			lotto[count] = comnum;
			cout << comnum << " ";
			count++;
		}
	}

	int cor = 0;
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			if (lotto[i] == user[j]) {
				cor += 1;
			}
		}
	}
	cout << "\n1~7등까지 결과가 나올 수 있습니다.\n";
	cout << "결과: " << 7 - cor << "등입니다!";
}