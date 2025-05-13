#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for(int j = 0; j < n; j++)
            cin >> arr[j];
        
        long long sum = 0;
        for(int a = 0; a < arr.size(); a++)
            for(int b = a + 1; b < arr.size(); b++)
                sum += gcd(arr[a], arr[b]);
        
        cout << sum << '\n';
    }
    
    return 0;
}