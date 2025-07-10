#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main()
{
    int m, n;
    cin >> m >> n;
    
    vector<vector<int>> graph(n, vector<int>(m));
    queue<pair<int, int>> q;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> graph[i][j];
            if(graph[i][j] == 1) q.push({i, j});
        }
    }
    
    while(!q.empty()){
        auto[y, x] = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx >= 0 && nx < m && ny >= 0 && ny < n){
                if(graph[ny][nx] == 0){
                    graph[ny][nx] = graph[y][x] + 1;
                    q.push({ny, nx});
                }
            }
        }
    }
    
    int result = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(graph[i][j] == 0){
                cout << -1;
                return 0;
            }
            result = max(result, graph[i][j]);
        }
    }
    
    cout << result - 1 << '\n';

    return 0;
}