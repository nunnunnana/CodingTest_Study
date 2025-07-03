#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<pair<long long, int>> v;
    v.reserve(2 * n);
    for(int i = 0; i < n; i++){
        long long te, tx;
        cin >> te >> tx;
        
        v.emplace_back(te, 1);
        v.emplace_back(tx, -1);
    }
    
    sort(v.begin(), v.end(), [](const auto &a, const auto &b) {
        if (a.first == b.first) return a.second > b.second;
        return a.first < b.first;
    });
    
    pair<long long, long long> result;
    
    int sum = 0, maxCount = 0;
    long long pt = v[0].first; 
    for (long long i = 0; i < v.size(); i++){
        if (v[i].first > pt) {
            if (sum > maxCount) {
                maxCount = sum;
                result = {pt, v[i].first};
            } 
            else if (sum == maxCount && pt == result.second){
                result.second = v[i].first;
            }
        }
        sum += v[i].second;
        pt = v[i].first; 
    }
    
    cout << maxCount << "\n";
    cout << result.first << " " << result.second << "\n";

    return 0;
}