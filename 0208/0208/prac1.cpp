#include<iostream>
using namespace std;

class Character {
public:
	string name;
	int level;
	int item;
	Character(string name) {
		this->name = name;
		level = 0;
		item = 0;
	}
	void setName(string name) {
		this->name = name;
	}
	void levelUp() {
		level += 1;
	}
	void itemUp() {
		item += 1;
	}
	void itemDown() {
		item -= 1;
	}
};

int main() {
	int num=1;
	string name;
	cout << "캐릭터 이름을 입력하세요: ";
	cin >> name;
	Character cha(name);

	while (num!=0) {
		cout << "무슨 조작을 하시겠습니까?(0~4): ";
		cin >> num;
		if (num == 1) {
			cout << "이름 변경: ";
			cin >> name;
			cha.setName(name);
			cout << "이름: " << cha.name << endl;
		}
		else if (num == 2) {
			cout << "level up!" << endl;
			cha.levelUp();
		}
		else if (num == 3) {
			cout << "item 줍줍 " << endl;
			cha.itemUp();
		}
		else if (num == 4) {
			cout << "item 사용" << endl;
			cha.itemDown();
		}
		else if (num == 5) {
			cout << "name: " << cha.name << endl << "level: " << cha.level << endl << "item: " << cha.item << endl;
		}
		else if (num == 0) {
			cout << "게임 종료";
			break;
		}

	}

	return 0;
}