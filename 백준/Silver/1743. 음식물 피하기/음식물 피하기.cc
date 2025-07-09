#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
vector<vector<int>> graph;
int dx[4] = {-1, 1, 0, 0}; 
int dy[4] = {0, 0, -1, 1};

int bfs(int y, int x){
    queue<pair<int, int>> q;
    q.push({y, x});
    graph[y][x] = 0;
    
    int count = 1;
    while(!q.empty()){
        auto[cy, cx] = q.front();
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int ny = cy + dy[i];
            int nx = cx + dx[i];
            
            if(nx > 0 && nx <= m && ny > 0 && ny <= n){
                if(graph[ny][nx]){
                    graph[ny][nx] = 0;
                    q.push({ny, nx});
                    count++;
                }
            }
        }
    }

    return count;
}

int main()
{
    int k;
    cin >> n >> m >> k;
    
    graph.assign(n + 1, vector<int>(m + 1, 0));
    for(int i = 0; i < k; i++){
        int r, c;
        cin >> r >> c;
        graph[r][c] = 1;
    }
    
    int result = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(graph[i][j] == 1) result = max(result, bfs(i, j));
        }
    }
    
    cout << result;

    return 0;
}