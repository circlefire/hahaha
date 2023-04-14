#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
	map<string, int> yearningMap; // 인물과 그리움 점수를 map에 저장
	for (int i = 0; i < name.size(); i++) {
		yearningMap[name[i]] = yearning[i]; // 인물의 이름은 key, 그리움 점수는 value로 저장
	}
	vector<int> answer;
	for (vector<string> people : photo) { //people 벡터에 해당 사진에 찍힌 인물의 이름 저장
		int sum = 0;
		for (string p : people) { // 이를 하나씩 꺼내 
			sum += yearningMap[p]; // yearningMap에서 그리움 점수를 찾아 sum에 더한다
		}
		answer.push_back(sum);
	}
	return answer;
}