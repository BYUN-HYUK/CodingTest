#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    long long sum = 0;
    
    for (int i = 0; i < numbers.size(); ++i) {
        sum += numbers[i];
    }
    if (numbers.empty()) {
        return 0.0;
    }
    double answer = static_cast<double>(sum) / numbers.size();
    
    return answer;
}