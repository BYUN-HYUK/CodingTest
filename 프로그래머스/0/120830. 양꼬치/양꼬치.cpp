#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int a = 12000;
    int b = 2000;
    int c = n / 10;
    
    int answer = n * a + k * b - c * 2000;
    
    return answer;
}