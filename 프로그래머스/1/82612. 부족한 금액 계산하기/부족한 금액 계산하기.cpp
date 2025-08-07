using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long total_cost = 0;
    for (int i = 1; i <= count; ++i) {
        total_cost += (long long)price * i;
    }
    if (money >= total_cost) {
        return 0;
    } else {
        return total_cost - money;
    }
    answer = total_cost;
    return answer;
}