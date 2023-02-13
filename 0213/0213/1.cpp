#include <iostream>
using namespace std;

class Person {
protected:
	string name;
public:
	virtual ~Person() {
		cout << "����� �Ҹ����Դϴ�\n";
	}
	virtual void info() {
		cout << "����Դϴ�.\n";
	}
	virtual void test() {
		cout << "����� test �Լ�\n";
	}
};

class Student : public Person {
	string stu_id;
public:
	~Student() {
		cout << "�л��� �Ҹ����Դϴ�\n";
	}
	void info() {
		cout << "�л��Դϴ�.\n";
	}
	void test() {
		cout << "�л��� test �Լ�\n";
	}
};

class Instructor : public Person {
public:
	~Instructor() {
		cout << "������ �Ҹ����Դϴ�\n";
	}
	void info() {
		cout << "�����Դϴ�.\n";
	}
};

int main() {
	//// ��ĳ����
	//Person s = Student();
	//s.info(); // �������ε� - ����Դϴ����

	//Person* ss = new Student();
	//ss->info(); // �������ε� - �л��Դϴ����
	//ss->test(); // ����, Person�� ���� ������� ���� �Ұ�
	////(*ss).info();

	//delete ss;

	//Student stu; // ���� �޸�
	//Person* sss = &stu;
	//sss->info();
	// delete sss; //delete ���� ��Ÿ�ӿ��� �߻�.new �־�� delete
	// delete ���� ����! build �߿� �޸𸮰� �Ҵ��

	Person* per_arr[3] = { new Student(), new Instructor(), new Student() };
	for (int i = 0; i < 3; i++) {
		per_arr[i]->info();
	}
	// delete[] per_arr; // ��Ÿ�� ���� ��

	for (int i = 0; i < 3; i++) {
		delete per_arr[i];
	} // new ������ŭ delete ����� ��

	//int* po = new int[3];
	//delete[] po; // new ������ŭ delete �������

	//Person persons[5] = { Student(), Student() };


}