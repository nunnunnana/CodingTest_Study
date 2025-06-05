#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> arr(N);
    for (int i = 0; i < N; ++i)
        cin >> arr[i];

    vector<int> count(100001, 0); // a[i] 범위: 1 ~ 100000

    int left = 0, right = 0;
    int max_len = 0;

    while (right < N) {
        count[arr[right]]++;

        // 어떤 수가 K개를 초과하면 왼쪽 포인터 이동
        while (count[arr[right]] > K) {
            count[arr[left]]--;
            left++;
        }

        max_len = max(max_len, right - left + 1);
        right++;
    }

    cout << max_len << endl;
    return 0;
}
