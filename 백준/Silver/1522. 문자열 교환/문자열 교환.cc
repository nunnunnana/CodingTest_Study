#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int aCount = 0, bCount = 0;
    aCount = count(s.begin(), s.end(), 'a');
    
    int n = s.size();
    for(int i = 0; i < aCount; i++){
        if(s[i] == 'b') bCount++;
    }
    
    s += s;
    int m = bCount;
    for(int i = 1; i < n; i++){
        if (s[i - 1] == 'b') bCount--;
        if (s[i + aCount - 1] == 'b') bCount++;

        m = min(m, bCount);
    }
    
    cout << m << endl;
    return 0;
}

