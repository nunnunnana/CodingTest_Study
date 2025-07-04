#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> graph;
vector<vector<bool>> visited;

int m, n;
int dx[4] = {-1, 1, 0, 0}; 
int dy[4] = {0, 0, -1, 1};

int dfs(int x, int y){
    visited[x][y] = true;
    int count = 1;
    for (int dir = 0; dir < 4; dir++) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
            if (!visited[nx][ny]) {
                count += dfs(nx, ny);
            }
        }
    }
    
    return count;
}

int main()
{
    int k;
    cin >> m >> n >> k;
    
    visited.resize(m, vector<bool>(n, false));
    
    while(k--){
        int ax, ay, bx, by;
        cin >> ax >> ay >> bx >> by;
        for(int i = ay; i < by; i++){
            for(int j = ax; j < bx; j++){
                visited[i][j] = true;
            }
        }
    }
    
    vector<int> groupCounts;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if (!visited[i][j]) {
                groupCounts.push_back(dfs(i, j));
            }
        }
    }
    
    sort(groupCounts.begin(), groupCounts.end());
    cout << groupCounts.size() << '\n';
    for (int cnt : groupCounts) {
        cout << cnt << " ";
    }

    return 0;
}