#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int count = 0, num = 666;
    while(1){
        string s = to_string(num);
        if (s.find("666") != string::npos){
            count++;
            if (count == N) {
                cout << num << endl;
                break;
            }
        }
        num++;
    }
    
    return 0;
}