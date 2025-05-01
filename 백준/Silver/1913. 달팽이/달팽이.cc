#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n][n] = {};
    int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};

    int x = n / 2, y = n / 2;
    arr[x][y] = 1;
    int a = 2;
    int step = 1;
    int tx = x, ty = y;
    
    
    while(a <= n * n){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < step; j++){
                x += dx[i];
                y += dy[i];
                if(a == m){
                    tx = x;
                    ty = y;
                }
                arr[x][y] = a;
                a++;
                if(a > n * n) break;
            }
            if(a > n * n) break;
            if(i % 2) step++;
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            cout << arr[i][j] << ' ';
        cout << '\n';
    }
    cout << tx + 1 << " " << ty + 1;
    return 0;
}