#include <iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;
    
    string min, max;
    int count = 0;
    for(const char c : n){
        if(c == 'M') count++;
        else{
            if(count > 0){
                min += '1';
                min.append(count - 1, '0');
                max += '5';
                max.append(count, '0');
            }
            else max += '5';
            min += '5';
            count = 0;
        }
    }
    
    if(count > 0){
        max.append(count, '1');
        min += '1';
        min.append(count - 1, '0');
    }
    
    cout << max << '\n' << min;
    return 0;
}