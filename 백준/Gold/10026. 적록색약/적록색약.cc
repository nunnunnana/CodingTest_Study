#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<vector<int>> area;
vector<vector<bool>> visited;

int n;
int dx[4] = {-1, 1, 0, 0}; 
int dy[4] = {0, 0, -1, 1};

int dfs(int x, int y, int color, bool colorBlind){
    visited[x][y] = true;
    int count = 1;
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(nx >= 0 && nx < n && ny >= 0 && ny < n){
            if(!visited[nx][ny]){
                if(colorBlind){
                    if ((abs(color) == 1 && abs(area[nx][ny]) == 1) || (color == 2 && area[nx][ny] == 2)) {
                        count += dfs(nx, ny, area[nx][ny], colorBlind);
                    }
                } 
                else{
                    if(area[nx][ny] == color){
                        count += dfs(nx, ny, color, colorBlind);
                    }
                }
            }
        }
    }
    
    return count;
}

int countRegions(bool colorBlind) {
    visited = vector<vector<bool>>(n, vector<bool>(n, false));
    int count = 0;

    vector<int> groupCounts;
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


int main()
{
    cin >> n;
    
    
    area.resize(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            char c;
            cin >> c;
            if(c == 'R'){
                area[i][j] = 1;
            }
            else if(c == 'G'){
                area[i][j] = -1;
            }
            else if(c == 'B'){
                area[i][j] = 2;
            }
        }
    }
    
    int normal = countRegions(false);
    int colorBlind = countRegions(true);

    cout << normal << " " << colorBlind << "\n";

    return 0;
}