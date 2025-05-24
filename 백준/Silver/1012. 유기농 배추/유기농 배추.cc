#include <iostream>
#include <vector>
using namespace std;

int dx[4] = {-1, 1, 0, 0}; 
int dy[4] = {0, 0, -1, 1};

int n, m, k;
vector<vector<int>> graph;
vector<vector<bool>> visited;

void dfs(int y, int x) {
    visited[y][x] = true;
    for(int dir = 0; dir < 4; dir++) {
        int ny = y + dy[dir];
        int nx = x + dx[dir];
        if (ny >= 0 && ny < n && nx >= 0 && nx < m) {
            if (!visited[ny][nx] && graph[ny][nx]) {
                dfs(ny, nx);
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    
    for(int c = 0; c < t; c++){
        cin >> m >> n >> k;
        graph.assign(n, vector<int>(m, 0));
        visited.assign(n, vector<bool>(m, false));
        
        for(int i = 0; i < k; i++){
            int x, y;
            cin >> x >> y;
            graph[y][x] = 1;
        }
        
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if (!visited[i][j] && graph[i][j]) {
                    dfs(i, j);
                    count++;
                }
            }
        }
        
        cout << count << '\n';   
    }

    return 0;
}
