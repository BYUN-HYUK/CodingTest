#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int p_len = p.length();
    long long p_num = stoll(p);
    
    for (int i = 0; i <= t.length() - p_len; ++i) 
    {
        string sub_t = t.substr(i, p_len);
        long long sub_t_num = stoll(sub_t);
        
        if (sub_t_num <= p_num) 
        {
            answer++;
        }
    }
    
    return answer;
}