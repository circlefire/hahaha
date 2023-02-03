#include<iostream>

int main() {
	std::string friend1 = "홍길동";
	std::string friend2 = "성춘향";

	std::string friends[3];

	friends[0] = "홍길동";
	friends[1] = "성춘향";
	friends[2] = "코딩온";

	/*std::string friends[] = {"홍길동", "성춘향"};
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
	std::cout << fruits << std::endl; // 주소값 출력.

	for (int i = 0; i < 3; i++) {
		std::cout << friends[i] << std::endl;
	}
	for (std::string f:friends) { // for each 문
		std::cout << f << std::endl;
	}
	for (auto &f : fruit) { // 2차원 for each 문
		for (auto f2 : f) {
			std::cout << f2 << std::endl;
		}
	}
}