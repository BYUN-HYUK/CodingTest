#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int digit = 0;
    
    while(n > 0) {
    int digit = n % 10;
    answer.push_back(digit);
    n = n / 10;
}
    return answer;
}