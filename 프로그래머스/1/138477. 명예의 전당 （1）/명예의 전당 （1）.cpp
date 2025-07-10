#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> hall_of_fame;
    
    for (int s : score) 
    {
        hall_of_fame.push_back(s);
        sort(hall_of_fame.begin(), hall_of_fame.end());
        
        if (hall_of_fame.size() > k)
        {
            hall_of_fame.erase(hall_of_fame.begin());
        }
        answer.push_back(hall_of_fame.front());
    }
    return answer;
}