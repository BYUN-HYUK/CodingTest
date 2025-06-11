#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int kimIndex = -1;
    
    for (int i = 0; i < seoul.size(); ++i) {
        if (seoul[i] == "Kim") {
            kimIndex = i;
            break;
        }
    }
    answer = "김서방은 " + to_string(kimIndex) + "에 있다";
    return answer;
}