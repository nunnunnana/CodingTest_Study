#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    vector<string> cases(n);
    vector<pair<int, int>> p(n);
    for(int i = 0; i < n; i++){
        cin >> cases[i] >> p[i].first >> p[i].second;
    }
    
    for(int i = 123; i <= 987; i++){
        string c = to_string(i);
        bool check = false;
        if(c[0] == c[1] || c[1] == c[2] || c[2] == c[0]) continue;
        if (c.find('0') != string::npos) continue;
        
        for(int j = 0; j < n; j++){
            int s = 0, b = 0;
            for (int k = 0; k < 3; k++) {
                if (c[k] == cases[j][k]) s++;
                else if (cases[j].find(c[k]) != string::npos) b++;
            }
            
            if(s == p[j].first && b == p[j].second) check = true;
            else {
                check = false;
                break;
            }
        }
        if(check) count++;
    }
    
    cout << count;
    
    return 0;
}