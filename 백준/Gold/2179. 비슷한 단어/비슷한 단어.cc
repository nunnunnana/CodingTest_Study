#include <iostream>
#include <vector>
#include <string>
using namespace std;

int commonPrefixLength(const string& a, const string& b) {
    int len = min(a.size(), b.size());
    int i = 0;
    while (i < len && a[i] == b[i]) {
        i++;
    }
    return i;
}

int main() {
    int N;
    cin >> N;
    vector<string> words(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> words[i];
    }

    int maxPrefixLen = -1;
    int first = -1, second = -1;

    // 모든 쌍 비교 (브루트포스)
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int prefixLen = commonPrefixLength(words[i], words[j]);

            if (prefixLen > maxPrefixLen) {
                maxPrefixLen = prefixLen;
                first = i;
                second = j;
            }
        }
    }

    cout << words[first] << '\n' << words[second] << '\n';

    return 0;
}
