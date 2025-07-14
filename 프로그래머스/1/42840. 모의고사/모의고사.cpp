#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> a = {1, 2, 3, 4, 5};
        int a_answer = 0;
    vector<int> b = {2, 1, 2, 3, 2, 4, 2, 5};
        int b_answer = 0;
        vector<int> c = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
        int c_answer = 0;
        
        for (int i = 0; i < answers.size(); ++i) {
            int current_answer = answers[i];
            if (current_answer == a[i % 5]) {
                a_answer++;
            }
            if (current_answer == b[i % 8]) {
                b_answer++;
            }
            if (current_answer == c[i % 10]) {
                c_answer++;
            }
        }
    int max_score = max({a_answer, b_answer, c_answer});
    
    if (a_answer == max_score) {
        answer.push_back(1);
    }
    if (b_answer == max_score) {
        answer.push_back(2);
    }
    if (c_answer == max_score) {
        answer.push_back(3);
    }

    return answer;
}