#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, count = 0;
    cin >> n >> m;

    vector<int> a(n);
    for(int& i : a) cin >> i;
    
    
    sort(a.begin(), a.end());
    
    int i = 0, j = n - 1;

    while(i < j){
        if(a[i] + a[j] == m){
            count++;
            i++;
            j--;
        }
        else if(a[i] + a[j] < m) i++;
        else j--;
    }

    cout << count;

    return 0;
}