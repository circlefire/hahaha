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
			cout << "Ÿ�� ����!\n\n���� ����!\n�� �Է��� �ܾ� ���� : " << wordnum;
			break;
		}

		cout << "���� �ܾ �Է��ϼ���: ";

		cin >> nextword;

		n = word.size();
		if (word[n - 1] != nextword[0]) {
			cout << "�߸��� �Է��Դϴ�.\n";
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