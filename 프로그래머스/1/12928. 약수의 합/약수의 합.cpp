#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int a = 0;
    
    for (int i = 1; i <= n; ++i ) 
    {
        if (n % i == 0) {
            answer = answer + i;
        }
    }
    
    return answer;
}