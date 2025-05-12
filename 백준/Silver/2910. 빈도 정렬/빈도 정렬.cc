#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;

    vector<int> nums(N);
    unordered_map<int, int> freq;    
    unordered_map<int, int> firstIdx; 

    for (int i = 0; i < N; ++i) {
        cin >> nums[i];
        freq[nums[i]]++;
        if (firstIdx.find(nums[i]) == firstIdx.end()) {
            firstIdx[nums[i]] = i;
        }
    }

    stable_sort(nums.begin(), nums.end(), [&](int a, int b) {
        if (freq[a] != freq[b]) return freq[a] > freq[b];     
        return firstIdx[a] < firstIdx[b];                     
    });

    for (int num : nums) {
        cout << num << ' ';
    }

    return 0;
}
