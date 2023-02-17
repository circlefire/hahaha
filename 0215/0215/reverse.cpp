#include<vector>
#include<iostream>
#include<string>
using namespace std;
//{{1,3},{1,4},{4,5}}
//cbade -> dabce -> dabec

void reverse(string s, vector<vector<int>> interval) {
	int i = 0, a, b;
	while (i < 3) {
		string s2 = "";
		a = interval.at(i).at(0) - 1;
		b = interval.at(i).at(1) - 1;
		int dif = b - a;
		for (int j = 0; j < dif + 1; j++) {
			s2.push_back(s.at(b-j));
		}
		s.erase(s.begin() + a, s.begin() + b + 1);
		s.insert(a, s2);
		i++;
	}
	cout << s << endl;
}



int main() {
	string str = "abcde";
	vector<vector<int>> v = { { 1,3 } ,{1, 4},{4, 5} };
	vector<vector<int>> v2 = { { 2,3 } ,{1, 5},{3, 3} };
	reverse(str, v);
	//cbade -> dabce -> dabec
	reverse(str, v2);
	//acbde -> edbca -> edbca
	reverse(str, { {2,4},{2,3},{4,5} });
	//adcbe -> acdbe -> acdeb
}