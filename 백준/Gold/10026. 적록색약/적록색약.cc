#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> area;
vector<vector<bool>> visited;

int n;
int dx[4] = {-1, 1, 0, 0}; 
int dy[4] = {0, 0, -1, 1};

void dfs(int x, int y, int color, bool colorBlind){
    visited[x][y] = true;

    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
        if(visited[nx][ny]) continue;
        
        if(colorBlind){
            if(abs(area[nx][ny]) == abs(color)) 
                dfs(nx, ny, abs(color), colorBlind);
        }
        else{
            if(area[nx][ny] == color) 
                dfs(nx, ny, color, colorBlind);
        }
    }
}

int countRegions(bool colorBlind) {
    visited.assign(n, vector<bool>(n, false));
    int count = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (!visited[i][j]) {
                dfs(i, j, area[i][j], colorBlind);
                count++;
            }
        }
    }
    return count;
}

int main() {
    cin >> n;
    
    area.resize(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            char c;
            cin >> c;
            if(c == 'R') area[i][j] = 1;
            else if(c == 'G') area[i][j] = -1;
            else if(c == 'B') area[i][j] = 2;
        }
    }
    
    int normal = countRegions(false);
    int colorBlind = countRegions(true);

    cout << normal << " " << colorBlind << "\n";
    return 0;
}
