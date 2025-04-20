#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f, x, y;
    
    cin >> a >> b >> c >> d >> e >> f;
    
    x = ((b * f) - (e * c)) / ((d * b) - (a * e));
    y = ((a * f) - (d * c)) / ((a * e) - (d * b));
    
    cout << x << ' ' << y;

    return 0;
}