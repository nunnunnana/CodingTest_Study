#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> s(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> s[i][j];
        }
    }
    
    int maxSum = -1e9;
    for(int top = 0; top < n; top++){
        vector<int> temp(m, 0);
        for(int bottom = top; bottom < n; bottom++){
            for (int col = 0; col < m; col++) {
                temp[col] += s[bottom][col];
            }
            
            int currentSum = temp[0];
            int currentMax = temp[0];
            
            for (int i = 1; i < m; i++) {
                currentSum = max(temp[i], currentSum + temp[i]);
                currentMax = max(currentMax, currentSum);
            }
            
            maxSum = max(maxSum, currentMax);
        }
    }
    
    cout << maxSum << '\n';
    return 0;
}