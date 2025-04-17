#include <iostream>
using namespace std;

int main() {
    string num;
    int base, result = 0;

    cin >> num >> base;

    for (char c : num) {
        result = result * base + (isdigit(c) ? c - '0' : c - 'A' + 10);
    }

    cout << result;
    return 0;
}
