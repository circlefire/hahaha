#include<iostream>
using namespace std;

struct Pos {
	int x;
	int y;
};

class Cat { // Ŭ������ �⺻������ ��������
	string name;
	string jong;
	int age = 0;
public:
	Cat(string name, string jong){//���� ����ȴ�? class�� ��ü ���� �� �ٷ� ����
		this->name = name;
		this->jong = jong;
	};
	void mew() {cout << "�߿�\n";}
	void eat() {cout << "������ �Դ´�\n";}
	string getName() {
		return name;
	}
	string getJong() {
		return jong;
	}
	int getAge() {
		return age;
	}
	void setName(string name) {
		this->name = name;
	}
	void setJong(string jong) {
		this->jong = jong;
	}
	void setAge(int age) {
		this->age = age;
	}
};

//Cat�̶�� Ŭ������ �ν��Ͻ�
//c�� ��ü
int main() {
	Pos p = { 2,6 };
	p.x;
	Cat c("����", "�丣�þ�"); // c�� ��ü. �� ������ Cat�� ������ �����.
	//c.age = 5;
	//Cat c2;
	c.mew();
	c.eat();
	//cout << c.name << " " << c.jong;
	c.setAge(5);
	c.setName("�ٵ���");
	//string name = c.name;
	string name = c.getName();
	int age = c.getAge();
	string jong = c.getJong();
}