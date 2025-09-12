#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    int answer = 0;
    int a = 0; // F(i-2) 
    int b = 1; // F(i-1)
    
    for (int i = 2; i <= n; ++i) {
        answer = (a + b) % 1234567;
        
        // 반복 값 업데이트
        a = b;
        b = answer;
    }
    
    return answer;
}