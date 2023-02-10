#include<iostream>
using namespace std;

class Student {
protected:
	string name, school;
	int age, stu_id;
public:
	string lunch() {
		cout << "������ �н�!\n";
	}
	void show() {
		cout << "�̸�: " << name << ", �б�: " << school << ", ����: " << age << ", �й�: " << stu_id << endl;
	}
};

class Kim : public Student {
public:
	Kim(string name, string school, int age, int stu_id){
		this->name = name;
		this->school = school;
		this->age = age;
		this->stu_id = stu_id;
	}
	void lunch() {
		cout << "������ �谡�� ���" << endl;
	}
};

class Baek : public Student {

public:
	Baek(string name, string school, int age, int stu_id) {
		this->name = name;
		this->school = school;
		this->age = age;
		this->stu_id = stu_id;
	}
	void lunch() {
		cout << "������ ������ ����" << endl;
	}
};

int main() {
	string name, school;
	int age, stu_id;
	cout << "�л� Kim�� ����(�̸�, �б�, ����, �й�): ";
	cin >> name >> school >> age >> stu_id;
	Kim kim(name, school, age, stu_id);
	cout << "�л� Baek�� ����(�̸�, �б�, ����, �й�): ";
	cin >> name >> school >> age >> stu_id;
	Baek baek(name, school, age, stu_id);

	kim.show();
	kim.lunch();
	baek.show();
	baek.lunch();

}