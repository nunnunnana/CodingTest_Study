#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int current = a;
    int count = 0;

    do {
        current = (current % 10) * 10 + (current / 10 + current % 10) % 10;
        count++;
    } while (current != a);

    cout << count;
    return 0;
}