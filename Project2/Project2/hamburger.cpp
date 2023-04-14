#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    int size = ingredient.size();
    while (1) {
        bool found = false;
        for (int i = 0; i < size - 3; i++) {
            if (ingredient[i] == 1 && ingredient[i + 1] == 2 && ingredient[i + 2] == 3 && ingredient[i + 3] == 1) {
                answer++;
                ingredient.erase(i, i + 4);
                found = true;
                break;
            }
        }
        if (!found) break;
    }
    return answer;
}