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
    
    graph.resize(n + 1, vector<int>(m + 1, 0));
    vector<pair<int, int>> v;
    for(int i = 0; i < k; i++){
        int r, c;
        cin >> r >> c;
        graph[r][c] = 1;
        v.push_back({r, c});
    }
    
    int result = 0;
    for(int i = 0; i < k; i++){
        result = max(result, bfs(v[i].first, v[i].second));
    }
    
    cout << result;

    return 0;
}