#include<iostream>

int main() {
	int x, y;
	int sum = 0;

	while (1) {
		std::cout << "x�� �Է��ϼ���: ";
		std::cin >> x;
		std::cout << "y�� �Է��ϼ���: ";
		std::cin >> y;
		if (x > 0 && y > 0) {
			break;
		}
		std::cout << "x�� y ��� ����� �Է����ּ���." << std::endl;
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