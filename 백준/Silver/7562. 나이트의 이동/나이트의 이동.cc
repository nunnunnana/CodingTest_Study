#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int l;
vector<vector<int>> dist;
int dx[8] = {-1, 1, -2, 2, -2, 2, -1, 1}; 
int dy[8] = {-2, -2, -1, -1, 1, 1, 2, 2};

int bfs(int a, int b, int x, int y){
    queue<pair<int,int>> q;
    q.push({a, b});
    dist[a][b] = 0;
    
    while(!q.empty()){
        auto[cx, cy] = q.front(); 
        q.pop();
        
        if (cx == x && cy == y) return dist[cx][cy];
            
        for(int dir = 0; dir < 8; dir++) {
            int nx = cx + dx[dir];
            int ny = cy + dy[dir];
            
            if (nx >= 0 && nx < l && ny >= 0 && ny < l) {
                if (dist[nx][ny] == 0) {
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
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> l;
        
        dist.assign(l, vector<int>(l, 0));
        
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        
        cout << bfs(a, b, x, y) << '\n';
    }

    return 0;
}