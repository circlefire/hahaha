#include <iostream>
using namespace std;

class Person {
protected:
	string name;
	static int static_var;
public:
	static void static_method() {
		cout << "����ƽ �޼ҵ� �׽�Ʈ\n";
	};
	Person() {
		this->name = "�ƹ���";
	}
	virtual ~Person() {
		cout << "����� �Ҹ����Դϴ�\n";
	}
	virtual void info() {
		cout << "����Դϴ�.\n";
	}
	void set_name(string name) {
		this->name = name;
	}
	string get_name() {
		return name;
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
	 // Person::info(); // �ȵ�
	Person::static_method();
	Person p;
	p.info();
	p.static_method();
}