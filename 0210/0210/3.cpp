#include<iostream>
using namespace std;

//�ʵ�(����), �޼ҵ�(�Լ�), ������(�޼ҵ��� ����), �Ҹ���(�޼ҵ��� ����)
class Person {
	int age;
	string name;
	int* p = new int[3];
public:
	Person() { // ������
		cout << "������ ����\n";
	}
	Person(string name) { // ������
		cout << "������ ����2\n";
	}
	void test() { // �޼ҵ�
		cout << "test \n";
	} 
	~Person() { // �Ҹ���
		delete[] p;
		cout << "Person �Ҹ��� ����\n";
	}
};

class Student :public Person {
public:
	~Student() {
		cout << "Student �Ҹ��� ����\n";
	}
};

int main() {
	Person p("aaa");
	p.test();
	//p.~Person();

	Person p2;

	Student s;
	s.test();
}