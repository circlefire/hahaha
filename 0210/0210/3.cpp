#include<iostream>
using namespace std;

//필드(변수), 메소드(함수), 생성자(메소드의 일종), 소멸자(메소드의 일종)
class Person {
	int age;
	string name;
	int* p = new int[3];
public:
	Person() { // 생성자
		cout << "생성자 실행\n";
	}
	Person(string name) { // 생성자
		cout << "생성자 실행2\n";
	}
	void test() { // 메소드
		cout << "test \n";
	} 
	~Person() { // 소멸자
		delete[] p;
		cout << "Person 소멸자 실행\n";
	}
};

class Student :public Person {
public:
	~Student() {
		cout << "Student 소멸자 실행\n";
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