#include<iostream>
#include<vector>

int main() {
	int x=1;
	int y = 0;
	int sum = 0;
	std::vector<int> v;
	std::cout << "����ڰ� �Է��� ���� ���ϱ�" << std::endl;
	while (x != 0) {
		std::cout << "���ڸ� �Է��ϼ���(0: exit) : ";
		std::cin >> x;
		v.insert(v.begin() + y, x);
		y++;
	}
	for (int& vv : v) {
		sum += vv;
	}
	std::cout << "����ڰ� �Է��� ������ ����: " << sum;
}

	// 
	////std::vector<int> v;
	////std::vector<int> v(3); ũ�Ⱑ 3�� ���� �迭 ����
	////std::vector<int> v(3, 1);// ũ�Ⱑ 3�� ���� �迭 ����, ���Ҹ� ��� 1�� �ʱ�ȭ
	////std::vector<int> v = { 1,2,3,4,5 }; //ũ�Ⱑ 3�� ���� �迭 ���� �� �ʱ�ȭ

	////int num;
	////std::cin >> num;
	////std::vector<int> v;
	////v.assign(num, 1); // num�� ũ��, ��� ���� 1�� �Ҵ�

	////for (int i = 0; i < v.size(); i++) {
	////	std::cout << v.at(i) << " ";
	////	//std::cout << v[i] << " ";
	////}

	//std::cout << std::endl;
	//v.resize(6); // �迭�� ũ�⸦ resize. Ŀ���� 0���� ä��.
	//v.push_back(10); // �迭�� �������� ���ϴ� ���Ҹ� �߰� {1,2,3,4,5,10}

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
	//v.erase(v.begin() + 2, v.begin() + 4); // index 2, 3�� ����
	//std::cout << std::endl;

	//for (int i = 0; i < v.size(); i++) {
	//	std::cout << v.at(i) << " ";
	//	//std::cout << v[i] << " ";
	//}
	////v.clear(); // �迭�� ��� ���� ����. size 0
	////std::cout << std::endl;

	////for (int i = 0; i < v.size(); i++) {
	////	std::cout << v.at(i) << " ";
	////	//std::cout << v[i] << " ";
	////}

	//std::cout << std::endl;
	////�迭 �� + 1
	//for (int& vv : v) {
	//	vv += 1;
	//}

	//for (int vv : v) {
	//	std::cout << vv << " ";
	//}
	//std::cout << std::endl << std::endl;
	////------------------2���� ����------------
	//std::vector < std::vector<int >> v2;
	//v2.assign(3, std::vector<int>(2, 1)); //3x2��� ����
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
