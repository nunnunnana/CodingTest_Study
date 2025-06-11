#include <iostream>
using namespace std;

int main()
{
    string s, n;
    cin >> s;
    
    int result = 0;
    bool isMinus = false;
    for(int i = 0; i <= s.size(); i++){
        if(s[i] == '+' || s[i] == '-' || i == s.size()) {
            result += isMinus ? -stoi(n) : stoi(n);
            n.clear();
        }
        if(s[i] == '-') isMinus = true;
        else n += s[i];
    }
    
    cout << result;
    return 0;
}