#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    
    int matched_count = 0;
    int zero_count = 0;
    
    for (int i = 0; i < lottos.size(); ++i)
    {
        if(lottos[i] == 0)
        {
            zero_count++;
            continue;
        }
        
        for (int j = 0; j < win_nums.size(); ++j)
        {
            if (lottos[i] == win_nums[j]) 
            {
                matched_count++;
                break;
            }
        }
    }
    
    int rank[] = {6, 6, 5, 4, 3, 2, 1};
    
    int max_rank = rank[matched_count + zero_count];
    int min_rank = rank[matched_count];
    
    return {max_rank, min_rank};
}