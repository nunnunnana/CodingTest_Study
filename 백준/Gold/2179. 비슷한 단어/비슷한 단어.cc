#include <iostream>
#include <vector>
using namespace std;

int Compare(const string& a, const string& b) {
    int len = min(a.size(), b.size());
    int i = 0;
    while (i < len && a[i] == b[i]) {
        i++;
    }
    return i;
}

int main()
{
    int n;
    cin >> n;
    
    vector<string> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int max = -1, x = 0, y = 1;
    
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int len = Compare(v[i], v[j]);
            if (len > max) {
                max = len;
                x = i;
                y = j;
            }
        }
    }

    cout << v[x] << '\n' << v[y] << '\n';
    return 0;
}

