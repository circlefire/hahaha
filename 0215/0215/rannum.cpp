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
		cout << count + 1 << "번째 번호를 입력하세요: ";
		cin >> unum;

		if (unum < 1 || unum > 25) {
			cout << "잘못된 숫자입니다. 다시 입력해주세요.\n";
			is_dup = true;
		}

		for (int i = 0; i < count; i++) {
			if (user[i] == unum) {
				is_dup = true;
				cout << "이미 입력된 숫자입니다.\n";
				break;
			}
		}
		if (!is_dup) {
			user[count] = unum;
			count++;
		}
	}

	cout << "--------------------------------------\n";
	cout << "당첨번호 공개!\n";
	int count2 = 0;
	while (count2 < 6) {
		bool is_dup2 = false;
		num = rand();
		comnum = num % 25 + 1;


		for (int j = 0; j < count2; j++) {
			if (lotto[j] == comnum) {
				is_dup2 = true;
				break;
			}
		}
		if (!is_dup2) {
			lotto[count2] = comnum;
			cout << comnum << " ";
			count2++;
		}
	}

	int cor = 0;
	for (int k = 0; k < count2; k++) {
		for (int l = 0; l < count; l++) {
			if (lotto[k] == user[l]) {
				cor += 1;
			}
		}
	}
	cout << "\n1~7등까지 결과가 나올 수 있습니다.\n";
	cout << "결과: " << 7 - cor << "등입니다!";
}