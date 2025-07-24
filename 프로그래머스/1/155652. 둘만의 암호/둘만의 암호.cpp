#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    bool is_skipped[26] = {false};
    for (char c : skip) {
        is_skipped[c - 'a'] = true;
    }
    
    for (char c : s) {
        char current_char = c;
        
        for (int i = 0; i < index; ++i) {
            do {
                current_char++;
                if (current_char > 'z') {
                    current_char = 'a';
                }
            } while (is_skipped[current_char - 'a']);
        }
        answer += current_char;
    }
    
    return answer;
}