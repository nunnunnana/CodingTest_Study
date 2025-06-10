#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    vector<int> v(n);
    for(int& i : v) cin >> i;
    
    int rest = k, count = 0;;
    for(int i = n - 1; i >= 0; i--){
        if(rest % v[i] == v[i]) continue;
        count += rest / v[i];
        rest %= v[i];
    }
    
    cout << count;
    return 0;
}