#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    pair<int, int> p[n];
    
    for(auto& [x, y] : p) cin >> x >> y;
    
    for(int i = 0; i < n; i++){
        int rank = 1;
        for(int j = 0; j < n; j++)
            if(p[j].first > p[i].first && p[j].second > p[i].second)
                rank++;
        cout << rank << ' ';
    }
    return 0;
}