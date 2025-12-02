#include <vector>
using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector<int>(n, 0));
    
    int dx[4] = {0, 1, 0, -1};  // 오른쪽 → 아래 → 왼쪽 → 위
    int dy[4] = {1, 0, -1, 0};
    
    int x = 0, y = 0;
    int dir = 0;     // 방향 인덱스 (0=오른쪽)
    int num = 1;     // 채울 숫자
    
    for (int i = 0; i < n * n; i++) {
        answer[x][y] = num++;

        int nx = x + dx[dir];
        int ny = y + dy[dir];

        // 방향 전환 조건
        if (nx < 0 || ny < 0 || nx >= n || ny >= n || answer[nx][ny] != 0) {
            dir = (dir + 1) % 4; // 방향 회전
            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        x = nx;
        y = ny;
    }

    return answer;
}
