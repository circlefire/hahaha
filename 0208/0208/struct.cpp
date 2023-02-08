#include<iostream>
using namespace std;

struct Pos {
	int x;
	int y;
};

class Cat { // 클래스는 기본적으로 정보은닉
	string name;
	string jong;
	int age = 0;
public:
	Cat(string name, string jong){//언제 실행된다? class로 객체 만들 때 바로 실행
		this->name = name;
		this->jong = jong;
	};
	void mew() {cout << "야옹\n";}
	void eat() {cout << "생선을 먹는다\n";}
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

//Cat이라는 클래스의 인스턴스
//c는 객체
int main() {
	Pos p = { 2,6 };
	p.x;
	Cat c("나비", "페르시안"); // c는 객체. 이 순간에 Cat의 생성자 실행됨.
	//c.age = 5;
	//Cat c2;
	c.mew();
	c.eat();
	//cout << c.name << " " << c.jong;
	c.setAge(5);
	c.setName("바둑이");
	//string name = c.name;
	string name = c.getName();
	int age = c.getAge();
	string jong = c.getJong();
}