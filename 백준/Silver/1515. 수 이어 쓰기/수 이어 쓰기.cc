#include <iostream>
using namespace std;

int main()
{
    string input;
    cin >> input;

    int idx = 0;
    int N = 0;

    while (idx < input.size()) {
        N++;
        string s = to_string(N);

        for (char c : s) {
            if (c == input[idx]) {
                idx++;
                if (idx == input.size()) break;
            }
        }
    }

    cout << N;
    return 0;
}