#include <iostream>
using namespace std;

int gcd(int x, int y){
    return x % y == 0 ? y : gcd(y, x % y);
}


int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        cout << (1LL * a * b) / gcd(a, b) << '\n';
    }

    return 0;
}