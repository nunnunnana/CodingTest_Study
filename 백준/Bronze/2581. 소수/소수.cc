#include <iostream>
#include<cmath>
using namespace std;

bool CheckPrimeNumber(int n){

    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}


int main()
{
    
    int minNum, maxNum;
    int minPrimeNum = 0, total = 0;
    
    cin >> minNum >> maxNum;
    
    if(minNum < 2){
        minNum = 2;
    }
    
    for(int i = minNum; i <= maxNum; i++){
        if(CheckPrimeNumber(i)){
            if(minPrimeNum == 0){
                minPrimeNum = i;
            }
            total += i;
        } 
    }
    
    if(total == 0){
        cout << -1 << endl;
    }
    else{
        cout << total << endl;
        cout << minPrimeNum << endl;
    }

    return 0;
}