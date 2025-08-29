#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> stack;
    
    for (int i : ingredient) {
        stack.push_back(i);
        
        if (stack.size() >= 4) {
            int n = stack.size();
            // push_back으로 쌓인 4개 재료가 순서랑 일치한지 확인
            if (stack[n-4] == 1 && stack[n-3] == 2 && stack[n-2] == 3 && stack[n-1] == 1) {
                answer++;
                // 카운트 후 사용한 스택 제거 
                stack.pop_back();
                stack.pop_back();
                stack.pop_back();
                stack.pop_back();
            }
        }
    }
    return answer;
}