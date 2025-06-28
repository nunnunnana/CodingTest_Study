#include <iostream>
#include <vector>
#include <deque>
#include <map>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main()
{
    int n, k;
    cin >> n >> k;
    
    vector<vector<int>> v(n + 1, vector<int> (n + 1, 0));
    for(int i = 0; i < k; i++){
        int x, y;
        cin >> x >> y;
        v[x][y] = 1;
    }
    
    int l;
    cin >> l;
    
    map<int, char> m;
    for(int i = 0; i < l; i++){
        int x;
        char c;
        cin >> x >> c;
        m[x] = c;
    }
    
    int time = 0, dir = 0;
    deque<pair<int, int>> snake;
    snake.push_back({1, 1});
    
    while(1){
        time++;
            
        int nx = snake.front().first + dx[dir];
        int ny = snake.front().second + dy[dir];
            
        if(nx < 1 || ny < 1 || nx > n || ny > n) break;
            
        for(auto& p : snake) {
            if(p.first == nx && p.second == ny) {
                cout << time;
                return 0;
            }
        }
            
        snake.push_front({nx, ny});
            
        if(v[nx][ny] == 1) v[nx][ny] = 0;
        else snake.pop_back();

        if(m.count(time)) {
            if (m[time] == 'D') dir = (dir + 1) % 4; 
            else dir = (dir + 3) % 4; 
        }
    }
    
    cout << time;
    
    return 0;
}