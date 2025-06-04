#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
    while (n > 0) {
        int digit = n % 10;
        answer.push_back(digit);
        n /= 10;
    }
    
    
    return answer;
}