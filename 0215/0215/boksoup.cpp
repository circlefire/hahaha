#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int curnum=0, inputnum, num, comnum=1;
	srand(time(NULL));

	while (1) {
		cout << "������ �Է��ϼ���: ";
		cin >> inputnum;

		if (inputnum > 3 || inputnum < 1) {
			cout << "1~3 ������ ���� �Է��ϼ���.";
		}
		else {
			cout << "����ڰ� �θ� ����!\n";
			for (int i = 1; i < inputnum + 1; i++) {
				cout << curnum + i << endl;
			}
			curnum += inputnum;
		}
		if (curnum >= 31) {
			cout << "���� ����! ��ǻ���� �¸��Դϴ�.";
			break;
		}
		cout << "��ǻ�Ͱ� �θ� ����!\n";
		num = rand();
		comnum = num % 3 + 1;
		for (int i = 1; i < comnum + 1; i++) {
			cout << curnum + i << endl;
		}
		curnum += comnum;
		
		if (curnum >= 31) {
			cout << "���� ����! ������� �¸��Դϴ�.";
			break;
		}
	}
}