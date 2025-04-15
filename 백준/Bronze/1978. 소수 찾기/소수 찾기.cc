#include <iostream>
using namespace std;


bool isPrime(int n){
    for(int j = 2; j < n; j++){
            if(n % j == 0){
                return false;
            }
        }
    return true;
}

int main()
{
    int count, primeNum = 0;
    
    cin >> count;
    
    int numArr[count];
    
    for(int i = 0; i < count; i++){
        cin >> numArr[i];
        
        if(numArr[i] != 1 && isPrime(numArr[i])){
            primeNum++;
        }
    }

    cout << primeNum << endl;
    
    return 0;
}