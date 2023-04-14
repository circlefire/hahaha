#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
	map<string, int> yearningMap; // �ι��� �׸��� ������ map�� ����
	for (int i = 0; i < name.size(); i++) {
		yearningMap[name[i]] = yearning[i]; // �ι��� �̸��� key, �׸��� ������ value�� ����
	}
	vector<int> answer;
	for (vector<string> people : photo) { //people ���Ϳ� �ش� ������ ���� �ι��� �̸� ����
		int sum = 0;
		for (string p : people) { // �̸� �ϳ��� ���� 
			sum += yearningMap[p]; // yearningMap���� �׸��� ������ ã�� sum�� ���Ѵ�
		}
		answer.push_back(sum);
	}
	return answer;
}