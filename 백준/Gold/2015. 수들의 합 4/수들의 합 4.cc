#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n + 1);
    map<long long, int> prefixCount;
    prefixCount[0] = 1;  
    long long sum = 0, answer = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        answer += prefixCount[sum - k];
        prefixCount[sum]++;
    }
    
    cout << answer;

    return 0;
}