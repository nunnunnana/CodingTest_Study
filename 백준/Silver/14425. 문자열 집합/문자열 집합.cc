#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);  
    cin.tie(0);             
    
    int n, m;
    cin >> n >> m;
    
    unordered_set<string> name;
    string s;
    for(int i = 0; i < n; i++){
        cin >> s;
        name.insert(s);
    }
    
    int count = 0;
    for(int i = 0; i < m; i++){
        cin >> s;
        if(name.find(s) != name.end()){
            count++;
        }
    }
    
    cout << count << '\n';

    return 0;
}