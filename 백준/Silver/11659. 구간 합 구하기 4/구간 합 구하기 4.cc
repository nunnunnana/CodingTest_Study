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
    
    vector<int> a(n + 1);
    vector<int> s(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    
    for(int t = 0; t < m; t++){
        int i, j;
        cin >> i >> j;
        cout << s[j] - s[i - 1] << '\n';
    }

    return 0;
}