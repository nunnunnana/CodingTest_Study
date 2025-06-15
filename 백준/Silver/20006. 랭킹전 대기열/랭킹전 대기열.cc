#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compareSecond(pair<int, string>& a, pair<int, string>& b) {
    return a.second < b.second;
}

int main()
{
    int p, m;
    cin >> p >> m;
    
    vector<pair<int, string>> v[p];
    for(int i = 0; i < p; i++){
        int lvl;
        string name;
        cin >> lvl >> name;
        
        if(i == 0){
            v[0].push_back({lvl, name});
            continue;
        }
        
        for (int j = 0; j < p; j++) {
            if (!v[j].empty() && v[j].size() < m) {
                if (lvl >= v[j][0].first - 10 && lvl <= v[j][0].first + 10) {
                    v[j].push_back({lvl, name});
                    break;
                }
            }
            else if(v[j].empty()){
                v[j].push_back({lvl, name});
                break;
            }
        }
    }
    
    for(int i = 0; i < p; i++) {
        sort(v[i].begin(), v[i].end(), compareSecond);
    }
    
    for(int i = 0; i < p; i++) {
        if(v[i].empty()) continue;
        else if(v[i].size() == m) cout << "Started!" << '\n';
        else cout << "Waiting!" << '\n';
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j].first << " " << v[i][j].second << '\n';
        }
    }

    return 0;
}