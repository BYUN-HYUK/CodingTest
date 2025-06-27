#include <string>
#include <vector>
#include <algorithm> 
#include <cmath> 

using namespace std;

int solution(int n) {
    string ternary_reversed = "";
    while (n > 0) {
        ternary_reversed += to_string(n % 3);
        n /= 3;
    }
    
    int answer = 0;
    for (int i = 0; i < ternary_reversed.length(); ++i) {
        int digit = ternary_reversed[i] - '0';
        answer += digit * pow(3, ternary_reversed.length() - 1 -i);
    }
    return answer;
}