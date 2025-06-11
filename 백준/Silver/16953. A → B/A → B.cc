#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    
    int result = b, count = 1;
    bool check;
    while(result > a){
        check = true;
        if(result % 2 == 0){
            result /= 2;
            count++;
            check = false;
        }
        else if(to_string(result).back() == '1'){
            string s = to_string(result);
            s.pop_back();
            result = stoi(s);
            count++;
            check = false;
        }
        if(check) {
            cout << -1;
            return 0;
        }
    }
    if(check || result < a){
        cout << -1;
        return 0;
    }
    cout << count;
    return 0;
}