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
		cout << count + 1 << "��° ��ȣ�� �Է��ϼ���: ";
		cin >> unum;

		if (unum < 1 || unum > 25) {
			cout << "�߸��� �����Դϴ�. �ٽ� �Է����ּ���.\n";
			is_dup = true;
		}

		for (int i = 0; i < count; i++) {
			if (user[i] == unum) {
				is_dup = true;
				cout << "�̹� �Էµ� �����Դϴ�.\n";
				break;
			}
		}
		if (!is_dup) {
			user[count] = unum;
			count++;
		}
	}

	cout << "--------------------------------------\n";
	cout << "��÷��ȣ ����!\n";
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
	cout << "\n1~7����� ����� ���� �� �ֽ��ϴ�.\n";
	cout << "���: " << 7 - cor << "���Դϴ�!";
}