#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    
    map<char, int> scores;
    
    for (int i = 0; i < survey.size(); ++i) {
        int choice = choices[i];
        char disagree_type = survey[i][0];
        char agree_type = survey[i][1];
        
        if (choice < 4) {
            scores[disagree_type] += (4 - choice);
        } else if (choice > 4) {
            scores[agree_type] += (choice - 4);
        }
    }
    
    if (scores['R'] >= scores['T']) {
        answer += 'R';
    } else {
        answer += 'T';
    }
    
    if (scores['C'] >= scores['F']) {
        answer += 'C';
    } else {
        answer += 'F';
    }
    
    if (scores['J'] >= scores['M']) {
        answer += 'J';
    } else {
        answer += 'M';
    }
    if (scores['A'] >= scores['N']) {
        answer += 'A';
    } else {
        answer += 'N';
    }
    return answer;
}