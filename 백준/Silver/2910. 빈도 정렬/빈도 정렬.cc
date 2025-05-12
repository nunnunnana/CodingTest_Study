#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int n, c;
    cin >> n >> c;

    vector<int> nums(n);
    unordered_map<int, int> freq;
    unordered_map<int, int> first_idx;

    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
        freq[nums[i]]++;
        if(!first_idx.count(nums[i])) first_idx[nums[i]] = i;
    }

    stable_sort(nums.begin(), nums.end(), [&](int a, int b) {
        return freq[a] != freq[b] ? freq[a] > freq[b] : first_idx[a] < first_idx[b];
    });

    for(int num : nums)
        cout << num << ' ';

    return 0;
}
