#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    if(arr.empty()) {
        return 0;
    }
    long long sum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        sum += arr[i];
    }
    
    answer = static_cast<double>(sum) / arr.size();
    return answer;
}