#include <iostream>
using namespace std;

class Person {
protected:
	string name;
public:
	virtual ~Person() {
		cout << "사람의 소멸자입니다\n";
	}
	virtual void info() {
		cout << "사람입니다.\n";
	}
	virtual void test() {
		cout << "사람의 test 함수\n";
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
	//// 업캐스팅
	//Person s = Student();
	//s.info(); // 정적바인딩 - 사람입니다출력

	//Person* ss = new Student();
	//ss->info(); // 동적바인딩 - 학생입니다출력
	//ss->test(); // 오류, Person에 없는 멤버에는 접근 불가
	////(*ss).info();

	//delete ss;

	//Student stu; // 정적 메모리
	//Person* sss = &stu;
	//sss->info();
	// delete sss; //delete 쓰면 런타임오류 발생.new 있어야 delete
	// delete 쓰지 않음! build 중에 메모리가 할당됨

	Person* per_arr[3] = { new Student(), new Instructor(), new Student() };
	for (int i = 0; i < 3; i++) {
		per_arr[i]->info();
	}
	// delete[] per_arr; // 런타임 오류 뜸

	for (int i = 0; i < 3; i++) {
		delete per_arr[i];
	} // new 개수만큼 delete 해줘야 함

	//int* po = new int[3];
	//delete[] po; // new 갯수만큼 delete 해줘야함

	//Person persons[5] = { Student(), Student() };


}