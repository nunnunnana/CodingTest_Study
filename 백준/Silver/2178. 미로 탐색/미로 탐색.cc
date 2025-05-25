#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> graph;

int n, m;
int dx[4] = {-1, 1, 0, 0}; 
int dy[4] = {0, 0, -1, 1};

int bfs(int x, int y){
    int count = 0;
    vector<vector<int>> visited(n, vector<int>(m));
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = 1;

    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        
        for(int dir = 0; dir < 4; dir++) {
            int nx = cx + dx[dir];
            int ny = cy + dy[dir];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (visited[nx][ny] == 0 && graph[nx][ny]) {
                    visited[nx][ny] = visited[cx][cy] + 1;
                    if(nx == n - 1 && ny == m - 1) return visited[nx][ny];
                    q.push({nx, ny});
                }
            }
        }
    }
    return -1;
}

int main()
{

    cin >> n >> m;
    graph.assign(n, vector<int>(m));
    
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        for(int j = 0; j < m; j++){
            graph[i][j] = s[j] - '0';
        }
    }
        
    cout << bfs(0, 0) << '\n';  

    return 0;
}