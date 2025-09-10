#include <string>
#include <vector>
#include <map>
#include <set>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    map<string, set<string>> reported_info; // 신고 기록 저장 
    map<string, int> mail_counts; // 유저 별 받을 메일 수 저장
    
    // report 벡터 순회 후 신고기록을 reported_info 에 정리 
    for (const string& r : report) {
        // stringstream 으로 문자열 r 준비
        stringstream ss(r);
        string reporter_id, reported_id;
        // 문자열에서 ID 분리
        ss >> reporter_id >> reported_id;
        // 분리한 ID 사용하여 map 기록
        reported_info[reported_id].insert(reporter_id);
    }
    // reported_info 의 map을 이용해 정지될 사람과 메일을 받을 사람을 계산하기
    for (auto const& [reported_user, reporters] : reported_info) {
        // 신고당한 횟수 k 이상인지 확인
        if (reporters.size() >= k) {
            for (const string& reporter_id : reporters) {
                mail_counts[reporter_id]++;
            }
        }
    }
    // id_list 순회해 mail_counts 맵에서 ID에 해당하는 메일을 찾아 넣어주기
    for (const string& id : id_list) {
        answer.push_back(mail_counts[id]);
    }
    
    return answer;
}