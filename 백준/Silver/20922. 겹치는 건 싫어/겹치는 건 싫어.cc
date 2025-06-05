#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(int& i : a) cin >> i;
    
    vector<int> count(100001, 0);
    int i = 0, j = 0;
    int len = 0;
    
    while(j < n){
        count[a[j]]++;
        while(count[a[j]] > k){
            count[a[i]]--;
            i++;
        }
        len = max(len, j - i + 1);
        j++;
    }
    
    cout << len;
    return 0;
}
