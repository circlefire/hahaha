#include<iostream>

int main() {
	int x, y;
	int sum = 0;

	while (1) {
		std::cout << "x를 입력하세요: ";
		std::cin >> x;
		std::cout << "y를 입력하세요: ";
		std::cin >> y;
		if (x > 0 && y > 0) {
			break;
		}
		std::cout << "x와 y 모두 양수를 입력해주세요." << std::endl;
	}

	int** arr = new int* [y];
	for (int i = 0; i < y; i++) {
		arr[i] = new int[y];
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			sum += 1;
			arr[i][j] = sum;
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < y; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}