#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) 
{   
    string left_side = "";
    for (int i = 1; i < food.size(); ++i) {
        int count = food[i] / 2;
        for (int j = 0; j < count; ++j) {
            left_side += to_string(i);
        }
    }
    
    string right_side = left_side;
    reverse(right_side.begin(), right_side.end());
    string answer = left_side + "0" + right_side;
    return answer;
}