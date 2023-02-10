#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

//private > protected > public
class Person {
protected:
	string name;
public:
	Person() {}
	string get_name() {
		return name;
	}
	void print() {
		cout << "Person print\n";
	}
};

class Student : public Person { // ±âº»°ª private
	string stu_id;
public:
	Student() : Person() {}
	void print(int a, int b) {
		cout << "Student print\n";
	}
};

int main() {
	Student s2;
	s2.print(1,2);
}