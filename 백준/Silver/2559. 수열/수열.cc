#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for(int& i : a) cin >> i;
    
    int sum = 0;
    for(int i = 0; i < k; i++) sum += a[i];
    
    int max = sum;
    for(int i = k; i < n; i++){
        sum += a[i] - a[i - k];
        if(sum > max) max = sum;
    }
    
    cout << max;

    return 0;
}