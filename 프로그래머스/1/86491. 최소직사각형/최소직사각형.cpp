#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int max_width = 0;
    int max_height = 0;
    
    for(const auto& size : sizes)
    {
        max_width = max(max_width, max(size[0], size[1]));
        max_height = max(max_height, min(size[0], size[1]));
    }
    
    
    return max_width * max_height;
}