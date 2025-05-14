#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> a(n+1);
    vector<int> s(n+1);
    
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }
    
    long long sum = 0;
    for(int i = 1; i <= n; i++){
        sum += a[i] * (s[n] - s[i]);
    }
    
    cout << sum << '\n';
    
    return 0;
}