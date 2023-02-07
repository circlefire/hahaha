#include<iostream>
#include<vector>

int main() {
	int x=1;
	int y = 0;
	int sum = 0;
	std::vector<int> v;
	std::cout << "사용자가 입력한 숫자 더하기" << std::endl;
	while (x != 0) {
		std::cout << "숫자를 입력하세요(0: exit) : ";
		std::cin >> x;
		v.insert(v.begin() + y, x);
		y++;
	}
	for (int& vv : v) {
		sum += vv;
	}
	std::cout << "사용자가 입력한 숫자의 합은: " << sum;
}

	// 
	////std::vector<int> v;
	////std::vector<int> v(3); 크기가 3인 벡터 배열 생성
	////std::vector<int> v(3, 1);// 크기가 3인 벡터 배열 선언, 원소를 모두 1로 초기화
	////std::vector<int> v = { 1,2,3,4,5 }; //크기가 3인 벡터 배열 선언 및 초기화

	////int num;
	////std::cin >> num;
	////std::vector<int> v;
	////v.assign(num, 1); // num의 크기, 모든 원소 1로 할당

	////for (int i = 0; i < v.size(); i++) {
	////	std::cout << v.at(i) << " ";
	////	//std::cout << v[i] << " ";
	////}

	//std::cout << std::endl;
	//v.resize(6); // 배열의 크기를 resize. 커지면 0으로 채움.
	//v.push_back(10); // 배열의 마지막에 원하는 원소를 추가 {1,2,3,4,5,10}

	//for (int i = 0; i < v.size(); i++) {
	//	std::cout << v.at(i) << " ";
	//	//std::cout << v[i] << " ";
	//}
	//v.pop_back();
	//v.pop_back();

	//std::cout << std::endl;
	//for (int i = 0; i < v.size(); i++) {
	//	std::cout << v.at(i) << " ";
	//	//std::cout << v[i] << " ";
	//}
	//std::cout << std::endl;
	//std::cout << v.front() << " ";
	//std::cout << v.back() << " ";
	//v.insert(v.begin() + 2, 30);
	//std::cout << std::endl;

	//for (int i = 0; i < v.size(); i++) {
	//	std::cout << v.at(i) << " ";
	//	//std::cout << v[i] << " ";
	//}
	//v.erase(v.begin() + 2);
	//std::cout << std::endl;

	//for (int i = 0; i < v.size(); i++) {
	//	std::cout << v.at(i) << " ";
	//	//std::cout << v[i] << " ";
	//}
	//v.erase(v.begin() + 2, v.begin() + 4); // index 2, 3만 삭제
	//std::cout << std::endl;

	//for (int i = 0; i < v.size(); i++) {
	//	std::cout << v.at(i) << " ";
	//	//std::cout << v[i] << " ";
	//}
	////v.clear(); // 배열의 모든 원소 삭제. size 0
	////std::cout << std::endl;

	////for (int i = 0; i < v.size(); i++) {
	////	std::cout << v.at(i) << " ";
	////	//std::cout << v[i] << " ";
	////}

	//std::cout << std::endl;
	////배열 값 + 1
	//for (int& vv : v) {
	//	vv += 1;
	//}

	//for (int vv : v) {
	//	std::cout << vv << " ";
	//}
	//std::cout << std::endl << std::endl;
	////------------------2차원 벡터------------
	//std::vector < std::vector<int >> v2;
	//v2.assign(3, std::vector<int>(2, 1)); //3x2행렬 생성
	//// { { 1 , 1 } , { 1 , 1 } , { 1 , 1 } }
	////v2[i]
	//for (int i = 0; i < v2.size(); i++) {
	//	for (int j = 0; j < v2.at(i).size(); j++) {
	//		std::cout << v2.at(i).at(j) << " ";
	//		//std::cout << v2[i][j] << " ";
	//	}
	//	std::cout << std::endl;
	//}
	//std::cout << std::endl;
	//
	//for (auto vv2 : v2) {
	//	for (auto vvv2 : vv2) {
	//		std::cout << vvv2 << " ";
	//	}
	//	std::cout << std::endl;
	//}
