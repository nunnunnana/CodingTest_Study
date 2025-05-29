#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<vector<int>> space;
int dx[3] = {-1, 0, 1}; 

int dfs(int y, int x, int dir) {
    if (y == N) return 0;
    
    int ret = 1e9; 
    for (int i = 0; i < 3; i++) {
        if (i == dir) continue;
        if (x + dx[i] >= 0 && x + dx[i] < M) {
            ret = min(ret, dfs(y + 1, x + dx[i], i) + space[y][x]);
        }
    }
    return ret;
}

int main()
{
    cin >> N >> M;
    space.resize(N,vector<int>(M));
    for (int i = 0; i < N; i++) 
        for (int j = 0; j < M; j++) 
            cin >> space[i][j];
            
    int result = 1e9;
    for (int i = 0; i < M; i++) {
        result = min(result, dfs(0, i, -1));
    }

    cout << result << '\n';

    return 0;
}