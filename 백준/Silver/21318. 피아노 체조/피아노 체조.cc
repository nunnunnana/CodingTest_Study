#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> a(n + 1), s(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        s[i] = s[i - 1] + (a[i - 1] > a[i]);
    }
    
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int x, y;
        cin >> x >> y;
        cout << s[y] - s[x] << '\n';
    }

    return 0;
}