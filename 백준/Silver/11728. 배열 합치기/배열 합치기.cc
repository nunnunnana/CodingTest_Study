#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    vector<int> s(n+m);
    for(int i = 0; i < s.size(); i++){
        cin >> s[i];
    }

    sort(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++){
        cout << s[i] << ' ';
    }
    return 0;
}