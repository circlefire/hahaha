#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int curnum=0, inputnum, num, comnum=1;
	srand(time(NULL));

	while (1) {
		cout << "������ �Է��ϼ���: ";
		cin >> inputnum;
		curnum += inputnum;

		if (inputnum > 3 || inputnum < 0) {
			cout << "1~3 ������ ���� �Է��ϼ���.";
		}
		else {
			cout << "����ڰ� �θ� ����!\n";
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
			cout << "���� ����! ��ǻ���� �¸��Դϴ�.";
			break;
		}
		cout << "��ǻ�Ͱ� �θ� ����!\n";
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
			cout << "���� ����! ������� �¸��Դϴ�.";
			break;
		}
	}
}