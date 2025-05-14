#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int N;
    cin >> N;
    
    vector<int> arr(N);
    for(int& i : arr){
        cin >> i;
    }
    
    int X;
    cin >> X;
    
    double sum = 0;
    int count = 0;
    for(int i = 0; i < N; i++){
        if(gcd(X, arr[i]) == 1){
            sum += arr[i];
            count++;
        }
    }
    
    cout << sum / count << '\n';
    
    
    return 0;
}