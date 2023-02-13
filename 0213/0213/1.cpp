#include <iostream>
using namespace std;

class Person {
protected:
	string name;
	static int static_var;
public:
	static void static_method() {
		cout << "스태틱 메소드 테스트\n";
	};
	Person() {
		this->name = "아무개";
	}
	virtual ~Person() {
		cout << "사람의 소멸자입니다\n";
	}
	virtual void info() {
		cout << "사람입니다.\n";
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
		cout << "학생의 소멸자입니다\n";
	}
	void info() {
		cout << "학생입니다.\n";
	}
	void test() {
		cout << "학생의 test 함수\n";
	}
};
class Instructor : public Person {
public:
	~Instructor() {
		cout << "강사의 소멸자입니다\n";
	}
	void info() {
		cout << "강사입니다.\n";
	}
};

int main() {
	 // Person::info(); // 안됨
	Person::static_method();
	Person p;
	p.info();
	p.static_method();
}