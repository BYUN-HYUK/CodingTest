#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    for (int i = left; i <= right; ++i) 
    {
        int sqrt_i = static_cast<int>(sqrt(i));
        if (sqrt_i * sqrt_i == i) {
            answer -= i;
        } else {
            answer += i;
        }
    }
    return answer;
}