#include<iostream>

int main() {
	double num = 0;
	double sum = 0;

	std::cout << "�л��� ���� �Է��ϼ���: ";
	std::cin >> num;
	double* grade = new double[num];

	for (int i = 0; i < num; i++) {
		std::cout << i+1<<"��° �л��� ������ �Է��ϼ���:  ";
		std::cin >> grade[i];
		sum += grade[i];
	}

	std::cout << "���� ���: "<<sum/num;
	
	
	delete[] grade;
}