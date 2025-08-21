#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int idx1 = 0;
    int idx2 = 0;
    
    for (const string& word : goal) {
        if (idx1 <  cards1.size() && word == cards1[idx1]) {
            idx1++;
        }
        else if (idx2 < cards2.size() && word == cards2[idx2]) {
            idx2++;
        }
        else {
            return "No";
        }
    }
    
        
    return "Yes";
}