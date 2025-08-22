#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for (const string& word : babbling) {
        bool is_possible = true;
        string last_word = "";
        
        // 규칙 1. aya, ye, woo, ma 로 구성되어 있는지 확인
        size_t idx = 0;
        while (idx < word.length()) {
            if (word.substr(idx, 3) == "aya") {
                if (last_word == "aya") {
                is_possible = false;
                break;
            }
                last_word = "aya";
                idx += 3;
            }
            else if (word.substr(idx, 2) == "ye") {
            if (last_word == "ye") {
                is_possible = false;
                break;
            }
            last_word = "ye";
            idx += 2;
        }
        else if (word.substr(idx, 3) == "woo") {
            if (last_word == "woo") {
                is_possible = false;
                break;
            }
            last_word = "woo";
            idx += 3;
        }
        else if (word.substr(idx, 2) == "ma") {
            if (last_word == "ma") {
                is_possible = false;
                break;
            }
            last_word = "ma";
            idx += 2;
        }
        else {
            is_possible = false;
            break;
        }
            
        }
        
        if (is_possible) {
        answer ++;
    }
    
    
    }
    return answer;
}