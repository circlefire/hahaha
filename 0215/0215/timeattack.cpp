#include<iostream>
#include<ctime>
#include<string>
using namespace std;

int main() {
	clock_t startTime = clock();
	string word, nextword, line;
	int n, wordnum=0;
	
	word = "airplane";
	line = word;
	cout << word << endl;
	while (1) {
		clock_t endTime = clock();
		if (((endTime - startTime) / CLOCKS_PER_SEC) >= 10) {
			cout << "타임 오버!\n\n게임 종료!\n총 입력한 단어 개수 : " << wordnum;
			break;
		}

		cout << "다음 단어를 입력하세요: ";

		cin >> nextword;

		n = word.size();
		if (word[n - 1] != nextword[0]) {
			cout << "잘못된 입력입니다.\n";
		}
		else {
			line += "->" + nextword;
			cout << line << endl;
			wordnum++;
			word = nextword;
		}
		cout << "\n";
	}


}