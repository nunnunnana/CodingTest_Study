#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x;
    cin >> n >> x;
    
    vector<int> a(n);
    for(int& i : a){
        cin >> i;
    }
    
    int result= 0;
    int count = 1;
    
    for(int i = 0; i < x; i++){
        result += a[i];
    }
    int max = result;
    for(int i = 0; i < n - x; i++){
        result = result - a[i] + a[x + i];
        
        if(result > max) {
            max = result;
            count = 1;
        }
        else if(result == max) count++;
    }
    
    if(max == 0) cout << "SAD";
    else cout << max << '\n' << count;

    return 0;
}