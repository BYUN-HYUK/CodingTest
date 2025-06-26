#include <string>
#include <vector>

using namespace std;
// 유클리드 호제법 최대공약수
int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int gcd_val = calculateGCD(n, m);
    // 최소공배수
    long long lcm_val = (long long)n * m / gcd_val;
    
    answer.push_back(gcd_val);
    answer.push_back(static_cast<int>(lcm_val));
    
    return answer;
}