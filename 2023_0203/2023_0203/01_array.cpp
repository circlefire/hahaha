#include<iostream>

int main() {
	float grade[5];
	float sum=0;

	for (int i = 0; i < 5; i++) {
		std::cout << i + 1 << "�� �л��� ������ �Է��ϼ���: ";
		std::cin >> grade[i];
		sum += grade[i];
	}

	std::cout << "���� ���: " << sum / 5;
}