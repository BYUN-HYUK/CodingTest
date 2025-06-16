#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    if (arr.size() == 1) {
        answer.push_back(-1);
        return answer;
    }
    auto minIter = min_element(arr.begin(), arr.end());
    int minValue = *minIter;
    
    for (int num : arr) {
        if (num != minValue) {
            answer.push_back(num);
        }
    }
    
    return answer;
}