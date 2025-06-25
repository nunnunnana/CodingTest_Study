#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> pillars(N);
    for (int i = 0; i < N; i++) {
        cin >> pillars[i].first >> pillars[i].second;
    }
    
    sort(pillars.begin(), pillars.end());

    int maxHeight = 0;
    int maxIndex = 0;
    for (int i = 0; i < N; i++) {
        if (pillars[i].second > maxHeight) {
            maxHeight = pillars[i].second;
            maxIndex = i;
        }
    }

    int area = 0;

    int height = pillars[0].second;
    int left = pillars[0].first;
    for (int i = 1; i <= maxIndex; i++) {
        if (pillars[i].second >= height) {
            area += (pillars[i].first - left) * height;
            height = pillars[i].second;
            left = pillars[i].first;
        }
    }

    height = pillars[N - 1].second;
    int right = pillars[N - 1].first;
    for (int i = N - 2; i >= maxIndex; i--) {
        if (pillars[i].second >= height) {
            area += (right - pillars[i].first) * height;
            height = pillars[i].second;
            right = pillars[i].first;
        }
    }

    area += maxHeight;

    cout << area << endl;

    return 0;
}
