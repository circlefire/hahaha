#include<iostream>

int main() {
	float grade[5];
	float sum=0;

	for (int i = 0; i < 5; i++) {
		std::cout << i + 1 << "번 학생의 성적을 입력하세요: ";
		std::cin >> grade[i];
		sum += grade[i];
	}

	std::cout << "성적 평균: " << sum / 5;
}