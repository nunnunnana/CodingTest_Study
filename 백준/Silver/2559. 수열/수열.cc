#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x;
    cin >> n >> x;
    
    vector<int> a(n);
    for(int& i : a) cin >> i;
    
    int sum = 0, count = 1;
    for(int i = 0; i < x; i++) sum += a[i];
    
    int max = sum;
    for(int i = x; i < n; i++){
        sum += a[i] - a[i - x];
        
        if(sum > max) {
            max = sum;
            count = 1;
        }
        else if(sum == max) count++;
    }
    
    cout << max << '\n';

    return 0;
}