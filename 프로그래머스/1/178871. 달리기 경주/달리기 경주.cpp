#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    // 이름과 현재 등수를 맵에 저장
    unordered_map<string, int> players_index;
    
    for (int i = 0; i < players.size(); ++i) {
        players_index[players[i]] = i;
    }
    // calling 배열 순회, 등수 변경
    for (const string& calling : callings) {
        // 추월하는 선수 이름 calling
        const string& chaser = calling;
        // 추월하는 선수의 현재 등수
        int chaser_idx = players_index[chaser];
        
        // 추월당하는 선수 (바로 왼쪽)의 이름
        string overtaken_player = players[chaser_idx - 1];
        // players 배열에서 두 선수 위치 교체
        swap(players[chaser_idx], players[chaser_idx - 1]);
        
        // 맵에 저장된 두 선수 등수 정보 갱신
        players_index[chaser] = chaser_idx - 1;
        players_index[overtaken_player] = chaser_idx;
    }
    answer = players;
    
    return answer;
}