#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int minNum, maxNum, minPrimeNum = 0, total = 0;
    cin >> minNum >> maxNum;

    auto isPrime = [](int n) {
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0) return false;
        return true;
    };

    for (int i = max(minNum, 2); i <= maxNum; i++) {
        if (isPrime(i)) {
            if (!minPrimeNum) minPrimeNum = i;
            total += i;
        }
    }

    if (!total)
        cout << -1 << '\n';
    else
        cout << total << '\n' << minPrimeNum << '\n';

    return 0;
}
