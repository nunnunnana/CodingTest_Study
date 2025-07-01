#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int MAX = 2003000;

bool isPalindrome(int num) {
    string s = to_string(num);
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int main()
{
    int n;
    cin >> n;
    
    vector<bool> isPrime(MAX + 1, true);
    isPrime[0] = isPrime[1] = false;
    
    for(int i = 2; i * i <= MAX; i++){
        if(!isPrime[i]) continue;
        for(int j = i * i; j <= MAX; j += i){
            isPrime[j] = false;
        }
    }
    
    for(int i = n; i <= MAX; i++) {
        if(isPrime[i] && isPalindrome(i)) {
            cout << i;
            return 0;
        }
    }
    
    return 0;
}
