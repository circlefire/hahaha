#include<iostream>

int main() {
	std::string friend1 = "ȫ�浿";
	std::string friend2 = "������";

	std::string friends[3];

	friends[0] = "ȫ�浿";
	friends[1] = "������";
	friends[2] = "�ڵ���";

	/*std::string friends[] = {"ȫ�浿", "������"};
	std::cout << friends[1];*/

	//int nums[3] = { 1,2,3 };
	//std::cout << nums[2];
	double nums[3] = { 1.5,2.5,3.5 };

	std::string fruit[2][3] = {
		{"faas","aaa","wdw"},{"asdw","wrsd","hdrt" }
	};

	std::string fruits[2][3][2] = {
		{{"",""},{"aaa",""},{"",""}},{{"",""},{"",""},{"",""}}
	};
	std::cout << fruits[0][1][0] << std::endl;
	std::cout << fruits << std::endl; // �ּҰ� ���.

	for (int i = 0; i < 3; i++) {
		std::cout << friends[i] << std::endl;
	}
	for (std::string f:friends) { // for each ��
		std::cout << f << std::endl;
	}
	for (auto &f : fruit) { // 2���� for each ��
		for (auto f2 : f) {
			std::cout << f2 << std::endl;
		}
	}
}