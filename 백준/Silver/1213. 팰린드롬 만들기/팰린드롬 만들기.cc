#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int alphabet[26] = {0, };
    string input;
    cin >> input;

    for (char c : input) alphabet[c - 'A']++;

    int oddCount = 0;
    char midChar = 0;
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] % 2 == 1) {
            oddCount++;
            midChar = 'A' + i;
        }
    }

    if (oddCount > 1) {
        cout << "I'm Sorry Hansoo";
        return 0;
    }

    string left = "";
    string right = "";

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < alphabet[i] / 2; j++) {
            left += ('A' + i);
        }
    }
    
    right = left;
    reverse(right.begin(), right.end());

    if (midChar) cout << left << midChar << right;
    else cout << left + right;

    return 0;
}