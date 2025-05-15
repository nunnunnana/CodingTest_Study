#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    vector <vector<int>> a(n+1, vector<int>(m + 1, 0));
    vector <vector<int>> s(n+1, vector<int>(m + 1, 0));
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            s[i][j] = s[i][j - 1] + a[i][j];
        }
    }
    
    int k;
    cin >> k;
    for(int t = 0; t < k; t++){
        int i, j, x, y;
        cin >> i >> j >> x >> y;
        
        long long sum = 0;
        for(int v = i; v <= x; v++){
            sum += s[v][y] - s[v][j - 1];
        }
        cout << sum << '\n';
    }

    return 0;
}