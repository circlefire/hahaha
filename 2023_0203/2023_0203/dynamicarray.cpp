#include<iostream>

int main() {
	double num = 0;
	double sum = 0;

	std::cout << "학생의 수를 입력하세요: ";
	std::cin >> num;
	double* grade = new double[num];

	for (int i = 0; i < num; i++) {
		std::cout << i+1<<"번째 학생의 성적을 입력하세요:  ";
		std::cin >> grade[i];
		sum += grade[i];
	}

	std::cout << "성적 평균: "<<sum/num;
	
	
	delete[] grade;
}