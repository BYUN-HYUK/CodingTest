#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    
    bool is_start_of_word = true;
    
    // string s 내 모든 단어 확인
    for(int i = 0; i < s.length(); ++i) {
        // string s 의 단어가 공백인 경우, is_start_of_word = true,
        if (s[i] == ' ') {
            is_start_of_word = true;
        }
        // 단어가 문자인 경우, 현재 문자를 대문자로 변경 후 is_start_of_word = false로 변경
        else if (is_start_of_word) {
            s[i] = toupper(s[i]);
            is_start_of_word = false;
        }
        else {
            s[i] = tolower(s[i]);
        }
    }
    answer = s;
    return answer;
}