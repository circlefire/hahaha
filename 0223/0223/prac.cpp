#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    while (1) {
        if (n >= my_str.size()) {
            answer.push_back(my_str.substr(0, my_str.size()));
        }
        answer.push_back(my_str.substr(0, n));
        for (int i = 0; i < n; i++) {
            answer.erase(answer.begin());
        }
    }
    return answer;
}