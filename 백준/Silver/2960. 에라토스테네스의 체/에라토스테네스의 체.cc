#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    vector<bool> isPrime(n + 1, false);
    int count = 0;
    
    for(int i = 2; i <= n; i++){
        if(isPrime[i]) continue;
        for(int j = i; j <= n; j += i){
            if(!isPrime[j]){
                isPrime[j] = true;
                count++;
                if(count == k){
                    cout << j << '\n';
                    return 0;
                }
            }
        }
    }

    return 0;
}