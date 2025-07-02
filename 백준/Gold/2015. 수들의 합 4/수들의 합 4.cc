#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int N;
    long long K;
    cin >> N >> K;

    long long sum = 0;
    long long count = 0;
    unordered_map<long long, int> prefixSumCount;

    prefixSumCount[0] = 1;

    for (int i = 0; i < N; i++) {
        long long num;
        cin >> num;

        sum += num;

        if (prefixSumCount.find(sum - K) != prefixSumCount.end()) {
            count += prefixSumCount[sum - K];
        }

        prefixSumCount[sum]++;
    }

    cout << count << '\n';
    return 0;
}
