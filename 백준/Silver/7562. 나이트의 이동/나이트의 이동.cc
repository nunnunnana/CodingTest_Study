#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> dist;
int dx[8] = {-1, 1, -2, 2, -2, 2, -1, 1}; 
int dy[8] = {-2, -2, -1, -1, 1, 1, 2, 2};

int bfs(int l, int sx, int sy, int ex, int ey){
    vector<vector<int>> dist(l, vector<int>(l, -1));
    queue<pair<int, int>> q;
    q.push({sx, sy});
    dist[sx][sy] = 0;
    
    while(!q.empty()){
        auto [x, y] = q.front(); 
        q.pop();
        if (x == ex && y == ey) return dist[x][y];
            
        for (int d = 0; d < 8; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if(nx >= 0 && nx < l && ny >= 0 && ny < l && dist[nx][ny] == -1) {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int l, a, b, x, y;
        cin >> l >> a >> b >> x >> y;
        cout << bfs(l, a, b, x, y) << '\n';
    }

    return 0;
}