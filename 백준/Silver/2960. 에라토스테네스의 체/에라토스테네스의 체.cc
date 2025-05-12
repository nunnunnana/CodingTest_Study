#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int isPrime(int n, int m){
    int count = 0;
    vector<bool> arr(n + 1, false);
    for(int i = 2; i <= n; i++){
        if(arr[i] == false){
            for(int j = 1; i * j <= n; j++){
                if(arr[i * j] == false){
                    count++;
                    arr[i * j] = true;
                    if(count == m){
                        cout << i * j << '\n';
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}


int main()
{
    int n, k;
    cin >> n >> k;
    isPrime(n, k);

    return 0;
}