#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int& i : v) cin >> i;
    
    sort(v.rbegin(), v.rend());
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(i % 3 == 2) continue;
        sum += v[i];
    }
    
    cout << sum;
    return 0;
}