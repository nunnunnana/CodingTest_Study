#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>>& v, int n, int m, int r){
    int layer = min(n, m) / 2;
   
    for(int i = 0; i < layer ; i++){
        vector<int> temp;
        for(int j = i; j < m - i; j++)
            temp.push_back(v[i][j]);
        
        for(int j = i + 1; j < n - i - 1; j++)
            temp.push_back(v[j][m - 1 - i]);
        
        for(int j = m - i - 1; j >= i; j--)
            temp.push_back(v[n - 1 - i][j]);
        
        for(int j = n - i - 2; j > i; j--)
            temp.push_back(v[j][i]);
            
        int len = temp.size();
        int rot = r % len;

        vector<int> rotated;
        for (int i = 0; i < len; ++i)
            rotated.push_back(temp[(i + rot) % len]);

        int idx = 0;
        for(int j = i; j < m - i; j++)
            v[i][j] = rotated[idx++];
        
        for(int j = i + 1; j < n - i - 1; j++)
            v[j][m - 1 - i] = rotated[idx++];
        
        for(int j = m - i - 1; j >= i; j--)
            v[n - 1 - i][j] = rotated[idx++];
        
        for(int j = n - i - 2; j > i; j--)
            v[j][i] = rotated[idx++];
    }
}

int main()
{
    int n, m, r;
    cin >> n >> m >> r;
    
    vector<vector<int>> v(n, vector<int> (m, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j]; 
        }
    }
    
    rotate(v, n, m, r);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << v[i][j] << ' '; 
        }
        cout << '\n';
    }
    
    return 0;
}