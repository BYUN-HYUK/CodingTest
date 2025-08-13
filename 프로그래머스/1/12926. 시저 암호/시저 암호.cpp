#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for (char c: s) {
        if (isspace(c)) {
            answer += c;
        } else if (isupper(c)) {
            answer += 'A' + (c - 'A' + n) % 26;
        } else if (islower(c)) {
            answer += 'a' + (c - 'a' + n) % 26;
        }
    }
    
    return answer;
}