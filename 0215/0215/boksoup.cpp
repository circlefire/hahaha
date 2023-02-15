#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int curnum=0, inputnum, num, comnum=1;
	srand(time(NULL));

	while (1) {
		cout << "개수를 입력하세요: ";
		cin >> inputnum;
		curnum += inputnum;

		if (inputnum > 3 || inputnum < 0) {
			cout << "1~3 사이의 수를 입력하세요.";
		}
		else {
			cout << "사용자가 부른 숫자!\n";
			if (inputnum == 1) {
				cout << curnum << endl;
			}
			else if (inputnum == 2) {
				cout << curnum - 1 << endl << curnum << endl;
			}
			else {
				cout << curnum - 2 << endl << curnum - 1 << endl << curnum << endl;
			}
		}
		if (curnum >= 31) {
			cout << "게임 종료! 컴퓨터의 승리입니다.";
			break;
		}
		cout << "컴퓨터가 부른 숫자!\n";
		num = rand();
		comnum = num % 3 + 1;
		curnum += comnum;
		if (comnum == 1) {
			cout << curnum << endl;
		}
		else if (comnum == 2) {
			cout << curnum - 1 << endl << curnum << endl;
		}
		else {
			cout << curnum - 2 << endl << curnum - 1 << endl << curnum << endl;
		}
		if (curnum >= 31) {
			cout << "게임 종료! 사용자의 승리입니다.";
			break;
		}
	}
}