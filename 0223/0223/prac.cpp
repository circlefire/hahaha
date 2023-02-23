#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    for (int i = 0; i < t.size() - p.size() + 1; i++) {
        string s = "";
        for (int j = 0; j < p.size(); j++) {
            s += t[i];
        }
        t=stoi(t);
        p=stoi(p);
        if (t <= p) answer++;
    }
    return answer;
}