#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int alphabet[26] = {}, odd = 0;
    string s, left;
    char mid = 0;

    cin >> s;
    for(char c : s) alphabet[c - 'A']++;
        
    for(int i = 0; i < 26; i++) {
        if (alphabet[i] % 2) {
            odd++;
            mid = 'A' + i;
            if(odd > 1) {
                cout << "I'm Sorry Hansoo";
                return 0;
            }    
        }
        left.append(alphabet[i] / 2, i + 'A');
    }
    
    string right = left;
    reverse(right.begin(), right.end());
    

    if(mid) cout << left << mid << right;
    else cout << left << right;

    return 0;   
}