#include <iostream>
using namespace std;

int main()
{
    int n, m;
    
    cin >> n >> m;
    
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    int arrGraph[n][n] = {};
    int x = n / 2, y = n / 2;
    arrGraph[x][y] = 1;
    int a = 2;
    int step = 1;
    int targetX = x, targetY = y;
    
    while(a <= n * n){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < step; j++){
                x += dx[i];
                y += dy[i];
                if(a == m){
                    targetX = x;
                    targetY = y;
                }
                arrGraph[x][y] = a;
                a++;
                if (a > n * n) break;
            }
            if (a > n * n) break;
            if(i == 1 || i == 3) step++;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arrGraph[i][j] << " ";
        }
        cout << '\n';
    }
    cout << targetX + 1 << " " << targetY + 1;
    return 0;
}