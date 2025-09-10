#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;
string solution(string s) {
    string answer = "";
    
    // 문자열 s 를 vector 로 저장
    stringstream ss(s);
    vector<int> numbers;
    int num;
    // ss 에서 공백 기준으로 숫자를 읽어 num에 저장
    while (ss >> num) {
        numbers.push_back(num);
    }
    // 최대값 최소값 찾기
    sort(numbers.begin(), numbers.end());
    answer += to_string(numbers.front());
    answer += " ";
    answer += to_string(numbers.back());
    
    return answer;
}