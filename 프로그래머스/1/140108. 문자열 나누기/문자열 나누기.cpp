#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    while (!s.empty()) {
            // s에서 카운트 할 변수들 초기화
            char x = s[0];
            int count_x = 0;
            int count_other = 0;
        
        bool splitted = false;
        
        // 반복문으로 문자열을 순회하며 카운트 증가
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == x) {
            count_x++; // x 와 같은 경우 count_x 증가
        } else {
            count_other++; // x와 다르면 count_other 증가
        }
        // x 횟수와 x가 아닌 글자 횟수 비교
        if (count_x == count_other) {
            answer++;
            s = s.substr(i + 1); // s를 남은 부분으로 갱신
            splitted = true;
            break;
        }

    }     
        // 반복 끝난 후 남은 전체를 마지막 조각으로 answer 증가
        if (!splitted) {
            answer++;
            break;
        }
    }
    
    return answer;
}