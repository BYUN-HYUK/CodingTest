#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    // 배열 오름차순 정렬 
    sort (lost.begin(), lost.end());
    sort (reserve.begin(), reserve.end());
    
    // 진짜 잃어버린 학생과 빌려줄 수 있는 학생 목록
    vector<int> lost_real;
    vector<int> reserve_real;
    
    // lost에는 있지만 reserve에 없는 학생 찾아 lost_real에 저장, 
   set_difference(lost.begin(), lost.end(), reserve.begin(), reserve.end(), back_inserter(lost_real));
    // 반대로 reserve에는 있지만 lost에는 없는 학생 찾아 reserve_real에 저장
    set_difference(reserve.begin(), reserve.end(), lost.begin(), lost.end(), back_inserter(reserve_real));
    
    // 초기 정답 선언
    answer = n - lost_real.size();
    // 읽어버린 학생을 기준으로 반복
    for (int i = 0; i < lost_real.size(); i++) {
        // 빌려줄 수 있는 학생을 기준으로 반복
        for (int j = 0; j < reserve_real.size(); j++) {
            
            // 왼쪽 학생은 -1, 오른쪽 학생은 +1 로 빌려줄 수 있는지 체크
            if (lost_real[i] - 1 == reserve_real[j] || lost_real[i] + 1 == reserve_real[j]) {
                answer++; // 수업 참여할 수 있는 학생 1 증가
                reserve_real[j] = -1; // 빌려준 학생은 다시 빌려줄 수 없게 -1 로 표시
                break;
            }
        }
    }
    
    return answer;
}