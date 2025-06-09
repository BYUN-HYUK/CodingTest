#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    int start_num;
    int end_num;
    
    if (a < b) {
        start_num = a;
        end_num = b;
    } else {
        start_num = b;
        end_num = a;
    }
    for (int i = start_num; i <= end_num; ++i) {
        answer += i;
    }
    
    return answer;
}