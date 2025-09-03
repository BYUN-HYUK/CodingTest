#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

// 날짜 문자열 헬퍼 함수 (YYYY.MM.DD)
int dateToDays(string date_str) {
    stringstream ss(date_str);
    string year_s, month_s, day_s;
    // '.' 을 기준으로 문자열 파싱
    getline(ss, year_s, '.');
    getline(ss, month_s, '.');
    getline(ss, day_s, '.');
    
    int year = stoi(year_s);
    int month = stoi(month_s);
    int day = stoi(day_s);
    // 모든 달은 28일 이라고 가정하기
    return (year * 12 * 28) + (month * 28) + day;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    // terms 의 key value 를 map 에 저장
    map<string, int> termsMap;
    for (const auto& term_str : terms) {
        stringstream ss(term_str);
        string type;
        int month;
        ss >> type >> month;
        termsMap[type] = month;
    }
    // 오늘 날짜를 총 일수로 전환
    int today_days = dateToDays(today);
    
    // for 루프로 privacies 순회
    for (int i = 0; i < privacies.size(); ++i) {
        const string& privacy_str = privacies[i];
        // 수집 일자와 약관 종류 파싱
        stringstream ss(privacy_str);
        string collection_date_str;
        string term_type;
        ss >> collection_date_str >> term_type;
        // 수집일자 총 일수로 변환
        int collection_days = dateToDays(collection_date_str);
        // 약관 유효기간 일수로 변환
        int term_duration_months = termsMap[term_type];
        int term_duration_days = term_duration_months * 28;
        // 파기 시작일
        // collection_days + term_duration_days - 1; 보관 가능한 마지막 날
        int expiration_days = collection_days + term_duration_days;
        
        if (today_days >= expiration_days) {
            answer.push_back(i + 1); // 개인정보 번호는 1부터 시작하니 i + 1;
        }
    }
    
    
    return answer;
}