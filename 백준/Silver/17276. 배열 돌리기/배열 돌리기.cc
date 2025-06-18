#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>>& v, bool isDiag){
    int n = v.size();
    int m = n / 2;

    vector<int> main_diag(n), sub_diag(n), row(n), col(n);
    for(int i = 0; i < n; i++){
        main_diag[i] = v[i][i];
        sub_diag[i] = v[i][n - 1 - i];
        row[i] = v[m][i];
        col[i] = v[i][m];
    }
    
    if(isDiag){
        for(int i = 0; i < n; i++){
            v[i][m] = main_diag[i];
            v[i][i] = row[i];
            v[m][i] = sub_diag[n - 1 - i];
            v[i][n - 1 - i] = col[i];
        }
    }
    else{
        for(int i = 0; i < n; i++){
            v[m][i] = main_diag[i];
            v[i][i] = col[i];
            v[i][m] = sub_diag[i];
            v[n - 1 - i][i] = row[i];
        }
    }
    
}

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int n, d;
        cin >> n >> d;
        
        vector<vector<int>> v(n, vector<int>(n));
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cin >> v[i][j];
                
        int count = abs(d) / 45;
        bool isDiag = (d > 0);
        
        for(int i = 0; i < count; i++) {
            rotate(v, isDiag);
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++)
                cout << v[i][j] << ' ';
            cout << '\n';
        }
    }

    return 0;
}