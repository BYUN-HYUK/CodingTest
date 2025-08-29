#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    
    // 드래그 영역 꼭짓점 좌표 저장할 변수 초기화
    int lux = 51, luy = 51, rdx = -1, rdy = -1;
    
    // wallpaper 배열 반복하여 파일 위치 찾기
    for (int i = 0; i < wallpaper.size(); ++i) {
        for (int j = 0; j < wallpaper[i].size(); ++j) {
            if (wallpaper[i][j] == '#') {
                // 현재 파일 위치를 포함하도록 드래그 영역의 범위를 갱신함
                lux = min(lux, i);
                luy = min(luy, j);
                rdx = max(rdx, i);
                rdy = max(rdy, j);
            }
        }
    }
    // rdx, rdy 는 파일을 포함하는 영역의 한칸 뒤기 때문에 +1
    vector<int> answer = {lux, luy, rdx+1, rdy+1};
    return answer;
}