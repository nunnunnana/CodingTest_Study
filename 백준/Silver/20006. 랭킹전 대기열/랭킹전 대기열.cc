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
    
    vector<vector<pair<int, string>>> v;
    for(int i = 0; i < p; i++){
        int lvl;
        string name;
        cin >> lvl >> name;
        
        bool placed = false;
        for (auto& n : v) {
            if (n.size() < m && abs(n[0].first - lvl) <= 10) {
                n.emplace_back(lvl, name);
                placed = true;
                break;
            }
        }
        
        if (!placed) {
            v.push_back({{lvl, name}});
        }
    }
    
    for (auto& n : v) {
        sort(n.begin(), n.end(), compareSecond);
        cout << (n.size() == m ? "Started!" : "Waiting!") << '\n';
        for (const auto& [lvl, name] : n) {
            cout << lvl << ' ' << name << '\n';
        }
    }

    return 0;
}