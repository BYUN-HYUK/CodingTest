#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int totalSum = 45;
    int sumOfNumbers = 0;
    
    for (int i = 0; i < numbers.size(); ++i) {
        sumOfNumbers += numbers[i];
    }
    int answer = totalSum - sumOfNumbers;
    
    return answer;
}