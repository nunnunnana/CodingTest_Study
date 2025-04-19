#include <iostream>
using namespace std;

int GetGCD(int a, int b) {
    if (b == 0) 
        return a;
    else 
        return GetGCD(b, a % b);
}

int main()
{
    int a, b;
    int gcd, lcm;
    
    cin >> a >> b;
    
    gcd = GetGCD(a, b);
    lcm = (a * b) / gcd;
    
    cout << gcd << '\n' << lcm;
    
    return 0;
}