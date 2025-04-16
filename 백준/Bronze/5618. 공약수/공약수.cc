#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

int main() {
    
    int n;
    cin >> n;

    int num;
    cin >> num;
    int result = num;

    for (int i = 1; i < n; i++) {
        cin >> num;
        result = gcd(result, num);
    }
    
    for (int i = 1; i <= result; i++) {
        if (result % i == 0) cout << i << '\n';
    }

    return 0;
}
