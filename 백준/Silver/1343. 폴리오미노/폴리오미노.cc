#include <iostream>
using namespace std;

int main()
{
    string s, result;
    cin >> s;
    
    int count = 0;
    for(int i = 0; i <= s.size(); i++){
        if(s[i] != 'X'){
            if (count % 2 != 0) {
                cout << -1 << '\n';
                return 0;
            }
            result.append(count / 4 * 4, 'A');
            result.append((count % 4) / 2 * 2, 'B');
            count = 0;
        }
        if(s[i] == '.') result += '.';
        else count++;
    }
    cout << result << '\n';
    return 0;
}