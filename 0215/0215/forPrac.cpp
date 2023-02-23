#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer, v1, v2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr1[j] == 0 && arr2[j] == 0) {
                answer[i][j] = ' ';
            }
            else {
                answer[i][j] = '#';
            }
            arr1[j] /= 2;
            arr2[j] /= 2;
        }
    }
    return answer;
}