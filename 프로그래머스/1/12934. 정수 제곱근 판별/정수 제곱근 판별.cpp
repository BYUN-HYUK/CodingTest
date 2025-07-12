#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    double result = sqrt(n);
    
    long long integer = static_cast<long long>(result);
    
    if (result == static_cast<double>(integer)) {
        answer = (integer + 1) * (integer + 1);
    } else {
        answer = -1;
    }
        
        
    return answer;
}