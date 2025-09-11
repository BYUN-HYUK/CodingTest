#include <string>
#include <vector>
#include <bitset>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int total_zero_count = 0; // 제거된 0의 개수
    int transform_count = 0; // 변환 횟수 세기
    
    // s가 1이 될 때까지 반복
    while (s != "1") {
        transform_count++;
        
        // 이번 변환에서 1의 개수와 제거할 0의 개수 
        int one_count = 0; 
        int current_zero_count = 0;
        
        // 현재 s에서 0과 1의 개수 세기
        for (char c : s) {
            if (c == '0') {
                current_zero_count++;
            }
            else {
                one_count++;
            }
        }
        total_zero_count += current_zero_count;
        
        // 1 의 개수를 2진수 문자열로 변환
        // s의 최대 길이가 150,000 이므로 bitset 크기도 크게 잡기
        s = bitset<32>(one_count).to_string();
        
        // 2진수 문자열 앞 0 제거 
        size_t first_one_pos = s.find('1');
        if (first_one_pos != string::npos) {
            s = s.substr(first_one_pos);
        }
        // one_count가 0이 되는 경우 s 도 0
        else {
            s = "0";
        }
    }
    // 반복이 종료되면 최종 결과를 asnwer 에 push_back
    answer.push_back(transform_count);
    answer.push_back(total_zero_count);
    
    return answer;
}