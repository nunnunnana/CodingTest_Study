#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--) {
        string w;
        int k;
        cin >> w >> k;
        
        vector<int> pos[26];
        for(int j = 0; j < w.size(); j++){
            pos[w[j] - 'a'].push_back(j);
        }
        
        int minLen = INT_MAX;
        int maxLen = -1;
        
        for (int ch = 0; ch < 26; ch++) {
            if (pos[ch].size() < k) continue;

            for (int j = 0; j <= pos[ch].size() - k; j++) {
                int start = pos[ch][j];
                int end = pos[ch][j + k - 1];
                int len = end - start + 1;

                minLen = min(minLen, len);
                maxLen = max(maxLen, len); 
            }
        }

        if (maxLen == -1) {
            cout << -1 << '\n';
        } else {
            cout << minLen << ' ' << maxLen << '\n';
        }
    }

    return 0;
}
