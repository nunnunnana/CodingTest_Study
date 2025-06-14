#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, n;
    cin >> s >> n;

    string result;

    for (char c : s) {
        result += c;

        if (result.size() >= n.size() && result.substr(result.size() - n.size()) == n) {
            result.erase(result.size() - n.size());
        }
    }

    cout << (result.empty() ? "FRULA" : result);
    return 0;
}