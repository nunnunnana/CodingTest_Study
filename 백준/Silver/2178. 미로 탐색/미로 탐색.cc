#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
vector<vector<int>> graph;
int dx[4] = {-1, 1, 0, 0}; 
int dy[4] = {0, 0, -1, 1};

int bfs(int x, int y){
    vector<vector<int>> dist(n, vector<int>(m));
    queue<pair<int, int>> q;
    
    q.push({x, y});
    dist[x][y] = 1;

    while(!q.empty()){
        auto[cx, cy] = q.front(); 
        q.pop();
        
        if (cx == n - 1 && cy == m - 1) return dist[cx][cy];
            
        for(int dir = 0; dir < 4; dir++) {
            int nx = cx + dx[dir];
            int ny = cy + dy[dir];
            
            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (dist[nx][ny] == 0 && graph[nx][ny]) {
                    dist[nx][ny] = dist[cx][cy] + 1;
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