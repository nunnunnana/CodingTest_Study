#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<long long> v(n);
    for(long long& i : v) cin >> i;
    
    sort(v.begin(), v.end());
    
    long long max = v[n - 1], temp = 0;;
    for(int i = 0; i < n / 2; i++){
        if(n % 2 == 0) temp = v[i] + v[(n - 1) - i];
        else temp = v[i] + v[(n - 2) - i];
        if(temp > max) max = temp;
    }
    
    cout << max;
    return 0;
}