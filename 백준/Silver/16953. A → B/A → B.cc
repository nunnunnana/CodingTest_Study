#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    
    int count = 1;
    while(b > a){
        if(b % 2 == 0) b /= 2;
        else if(b % 10 == 1) b /= 10;
        else break;
        count++;
    }

    cout << ((b == a) ? count : -1);
    return 0;
}