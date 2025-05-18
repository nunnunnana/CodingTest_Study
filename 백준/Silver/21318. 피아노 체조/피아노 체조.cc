#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> a(n + 1);
    vector<int> s(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        
        if(a[i - 1] > a[i]) s[i] = s[i - 1] + 1;
        else s[i] = s[i - 1];
    }
    
    int q;
    cin >> q;
    
    for(int i = 0; i < q; i++){
        int x, y;
        cin >> x >> y;
        
        int result = s[y] - s[x];
        cout << result << '\n';
    }

    return 0;
}