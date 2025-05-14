#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    long long total = 0;
    vector<int> a(n);
    for(int& i : a) {
        cin >> i;
        total += i;
    }
    
    long long result = 0;
    for(int i = 0; i < n - 1; i++){
        total -= a[i];
        result += a[i] * total;
    }
    
    cout << result << '\n';
    
    return 0;
}