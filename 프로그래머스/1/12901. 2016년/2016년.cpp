#include <string>
#include <vector>
#include <string>

using namespace std;

string solution(int a, int b) {
    string days_week[] = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int days_month[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;
    
    for (int i = 0; i < a - 1; ++i)
    {
        total_days += days_month[i];
    }
    total_days += b;
    
    int day_index = (total_days - 1) % 7;
    
    return days_week[day_index];
}