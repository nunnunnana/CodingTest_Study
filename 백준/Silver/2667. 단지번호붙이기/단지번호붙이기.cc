#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> graph;
vector<vector<bool>> visited;

int n;
int dx[4] = {-1, 1, 0, 0}; 
int dy[4] = {0, 0, -1, 1};

int dfs(int x, int y){
    visited[x][y] = true;
    int count = 1;
    for (int dir = 0; dir < 4; dir++) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
            if (!visited[nx][ny] && graph[nx][ny]) {
                count += dfs(nx, ny);
            }
        }
    }
    
    return count;
}

int main()
{
    cin >> n;
    graph.resize(n, vector<int>(n));
    visited.resize(n, vector<bool>(n, false));
    
    
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        for (int j = 0; j < n; j++) {
            graph[i][j] = s[j] - '0';
        }
    }
    
    vector<int> groupCounts;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (!visited[i][j] && graph[i][j]) {
                groupCounts.push_back(dfs(i, j));
            }
        }
    }
    
    sort(groupCounts.begin(), groupCounts.end());
    cout << groupCounts.size() << '\n';
    for (int cnt : groupCounts) {
        cout << cnt << '\n';
    }

    return 0;
}