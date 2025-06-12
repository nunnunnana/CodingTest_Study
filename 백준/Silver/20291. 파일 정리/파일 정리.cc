#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    map<string, int> m;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        s = s.substr(s.find('.') + 1);
        m[s]++;
    }
    
    for(auto& [a, b] : m){
        cout << a << ' ' << b << '\n';
    }
    
    return 0;
}

