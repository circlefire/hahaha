#include<iostream>
using namespace std;

class Student {
protected:
	string name, school;
	int age, stu_id;
public:
	string lunch() {
		cout << "점심은 학식!\n";
	}
	void show() {
		cout << "이름: " << name << ", 학교: " << school << ", 나이: " << age << ", 학번: " << stu_id << endl;
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
		cout << "점심은 김가네 김밥" << endl;
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
		cout << "점심은 백종원 피자" << endl;
	}
};

int main() {
	string name, school;
	int age, stu_id;
	cout << "학생 Kim씨 제작(이름, 학교, 나이, 학번): ";
	cin >> name >> school >> age >> stu_id;
	Kim kim(name, school, age, stu_id);
	cout << "학생 Baek씨 제작(이름, 학교, 나이, 학번): ";
	cin >> name >> school >> age >> stu_id;
	Baek baek(name, school, age, stu_id);

	kim.show();
	kim.lunch();
	baek.show();
	baek.lunch();

}