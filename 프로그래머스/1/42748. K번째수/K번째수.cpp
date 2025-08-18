#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    
    for (int c = 0; c < commands.size(); ++c) {
        int i = commands[c][0];
        int j = commands[c][1];
        int k = commands[c][2];
        
        vector<int> slide_vector (array.begin() + (i - 1), array.begin() + j);
        sort(slide_vector.begin(),  slide_vector.end());
    
        int result = slide_vector[k - 1];
        answer.push_back(result);
    }
    
    
    return answer;
}