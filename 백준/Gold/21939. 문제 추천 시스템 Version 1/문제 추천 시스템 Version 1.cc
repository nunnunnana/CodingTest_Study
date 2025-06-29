#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    set<pair<int, int>> set;
    map<int, int> map;
    for(int i = 0; i < n; i++){
        int p, l;
        cin >> p >> l;
        set.insert({l, p});
        map[p] = l;
    }
    
    int m;
    cin >> m;
    
    for(int i = 0; i < m; i++){
        string s;
        cin >> s;
        if(s == "recommend"){
            int x;
            cin >> x;
            if(x == 1) cout << set.rbegin()->second << '\n';
            else cout << set.begin()->second << '\n';
            
        }
        else if(s == "add"){
            int p, l;
            cin >> p >> l;
            set.insert({l, p});
            map[p] = l;
        }
        else if(s == "solved"){
            int p;
            cin >> p;
            int l = map[p];
            set.erase({l, p});
            map.erase(p);
        }
    }

    return 0;
}