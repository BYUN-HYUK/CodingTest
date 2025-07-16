#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int count = 0;
    int current_section_idx = 0;
    
    sort(section.begin(), section.end());
    
    while(current_section_idx < section.size()) {
        count++;
        
        int start_paint_section = section[current_section_idx];
        int end_paint_range = start_paint_section + m - 1;
        
        while (current_section_idx < section.size() && section[current_section_idx] <= end_paint_range)
        {
            current_section_idx++;
        }
    }

    return count;
}