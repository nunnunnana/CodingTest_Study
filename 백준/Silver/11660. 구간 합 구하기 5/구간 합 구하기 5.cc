#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> s(n + 1, vector<int>(n + 1));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> s[i][j];
            s[i][j] += s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];
        }
    }
    
    for(int t = 0; t < m; t++){
        int i, j, x, y;
        cin >> i >> j >> x >> y;
        
        long long result = s[x][y] - s[i - 1][y] - s[x][j - 1] + s[i - 1][j - 1];
        cout << result << '\n';
    }

    return 0;
}