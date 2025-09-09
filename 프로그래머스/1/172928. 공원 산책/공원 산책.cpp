#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int currentY, currentX;
    bool found = false;
    
    // park 에서 시작 위치 (x, y) 찾기
    for (int i = 0; i < park.size(); ++i) {
        for (int j = 0; j <park[i].size(); ++j) {
            if (park[i][j] == 'S') {
                currentY = i;
                currentX = j;
                found = true; // S 값 전부 찾았다면 반복 종료
                break;
            }
        }
        if (found) {
            break;
        }
    }
    // routes를 순회
    for (const string& route : routes) {
        // 방향
        char direction = route[0];
        // 거리 
        int distance = route[2] - '0';
        
        if (direction == 'N') {
            if (currentY - distance < 0) {
                continue;
            }
            bool isBlocked = false;
            for (int i = 1; i <= distance; ++i) {
                if (park[currentY - i][currentX] == 'X') {
                    isBlocked = true;
                    break;
                }
            }
            if (!isBlocked) {
                currentY -= distance;
            }
        } else if (direction == 'S') {
            if (currentY + distance >= park.size()) {
                continue;
            }
            bool isBlocked = false;
            for (int i = 1; i <= distance; i++) {
                if (park[currentY + i][currentX] == 'X') {
                    isBlocked = true;
                    break;
                }
            }
            if (!isBlocked) {
                currentY += distance;
            }
        } else if (direction == 'W') {
            if (currentX - distance < 0) {
                continue;
            }
            bool isBlocked = false;
            for (int i = 1; i <= distance; ++i) {
                if (park[currentY][currentX - i] == 'X') {
                    isBlocked = true;
                    break;
                }
            }
            if (!isBlocked) {
                currentX -= distance;
            }
        } else if (direction == 'E') {
            if (currentX + distance >= park[0].size()) {
                continue;
            }
            bool isBlocked = false; 
            for (int i = 1; i <= distance; i++) {
                if (park[currentY][currentX + i] == 'X') {
                    isBlocked = true;
                    break;
                }
            }
            if (!isBlocked) {
                currentX += distance; 
            }
        }
    }
    answer.push_back(currentY);
    answer.push_back(currentX);
    
    return answer;
}