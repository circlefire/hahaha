#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main() {
	int num, unum, comnum, lotto[6]={}, user[6]={};
	srand(time(NULL));

	cout << "���ڴ� 1~25������ ���ڸ� �Է��� �� �ֽ��ϴ�.\n";

	int count = 0;
	while (count < 6) {
		bool is_dup = false;
		bool is_wrong = false;
		cout << count + 1 << "��° ��ȣ�� �Է��ϼ���: ";
		cin >> unum;

		if (unum < 1 || unum > 25) {
			cout << "�߸��� �����Դϴ�. �ٽ� �Է����ּ���.\n";
			is_wrong = true;
		}

		for (int i = 0; i < count; i++) {
			if (user[i] == unum) {
				is_dup = true;
				cout << "�̹� �Էµ� �����Դϴ�.\n";
				break;
			}
		}

		if (!is_dup&&!is_wrong) {
			user[count] = unum;
			count++;
		}
	}

	cout << "--------------------------------------\n";
	cout << "��÷��ȣ ����!\n";
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
	cout << "\n1~7����� ����� ���� �� �ֽ��ϴ�.\n";
	cout << "���: " << 7 - cor << "���Դϴ�!";
}