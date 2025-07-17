#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int total_weight = 0;

    for (int i = 1; i <= number; ++i) {
        int divisor_count = 0;
        for (int j = 1; j * j <= i; ++j) {
            if (i % j == 0) {
                if (j * j == i) {
                    divisor_count += 1;
                } else {
                    divisor_count += 2;
                }
            }
        }   
        
        if (divisor_count > limit) 
        {
            total_weight += power;
        } else {
            total_weight += divisor_count;
        }
    }

    
    return total_weight;
}