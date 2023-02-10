#include <iostream>
using namespace std;

class Elec { // 추상 클래스
public:
	virtual void on() = 0; // 추상 메소드 (순수 가상 함수)
	virtual void off() = 0;
	void test() {
		cout << "test" << endl;
	}
};

class TV : public Elec { 
	// 부모에서 상속 받은 순수 가상 함수를 구현하지 않을 경우. 자식 클래스 또한 추상 클래스가 됨.
public:
	void on() {
		cout << "TV 켜기" << endl;
	}
	void off() {
		cout << "TV 끄기" << endl;
	}
};

class Radio : public Elec {
public:
	void on() {
		cout << "Radio 켜기" << endl;
	}
	void off() {
		cout << "Radio 끄기" << endl;
	}
};

int main() {
	//Elec elec; // 오류! 추상 클래스로는 객체를 생성할 수 없음
	TV tv;
	tv.test();
	tv.on();
	
	Radio radio;
	radio.test();
	radio.on();
}