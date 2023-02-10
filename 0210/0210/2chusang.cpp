#include <iostream>
using namespace std;

class Elec { // �߻� Ŭ����
public:
	virtual void on() = 0; // �߻� �޼ҵ� (���� ���� �Լ�)
	virtual void off() = 0;
	void test() {
		cout << "test" << endl;
	}
};

class TV : public Elec { 
	// �θ𿡼� ��� ���� ���� ���� �Լ��� �������� ���� ���. �ڽ� Ŭ���� ���� �߻� Ŭ������ ��.
public:
	void on() {
		cout << "TV �ѱ�" << endl;
	}
	void off() {
		cout << "TV ����" << endl;
	}
};

class Radio : public Elec {
public:
	void on() {
		cout << "Radio �ѱ�" << endl;
	}
	void off() {
		cout << "Radio ����" << endl;
	}
};

int main() {
	//Elec elec; // ����! �߻� Ŭ�����δ� ��ü�� ������ �� ����
	TV tv;
	tv.test();
	tv.on();
	
	Radio radio;
	radio.test();
	radio.on();
}