#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    int r = 0, b = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == s[i - 1] && i > 0) continue;
        if(s[i] == 'B') b++;
        else r++;
    }
    
    cout << min(r, b) + 1;
    
    return 0;
}