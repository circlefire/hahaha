#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string rsp) {
    string answer = "";
    int irsp = stoi(rsp);
    while (1) {
        if (irsp % 10 == 2) answer.insert(0, "0");
        else if (irsp % 10 == 0) answer.insert(0, "5");
        else if (irsp % 10 == 5) answer.insert(0, "2");
        if (irsp < 10) return answer;
        irsp /= 10;
    }
    return answer;
}