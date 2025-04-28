#include <iostream>
using namespace std;

int main()
{
    int cash;
    int stockPrice[14];
    int bnpCash, bnpStock = 0;
    int timingCash, timingStock = 0;
    int a, b;
    
    cin >> cash;
    bnpCash = cash;
    timingCash = cash;
    
    for(int& price : stockPrice){
        cin >> price;
    }
    
    int preStock = stockPrice[0];
    
    for(int i = 0; i < 14; i++){
        if(bnpCash >= stockPrice[i]){
            bnpStock += bnpCash / stockPrice[i];
            bnpCash %= stockPrice[i];
        }
        if(preStock > stockPrice[i]){
            b = 0;
            a++;
            if(a >= 3){
                timingStock += timingCash / stockPrice[i];
                timingCash %= stockPrice[i];
            }
        }
        else if(preStock < stockPrice[i]){
            a = 0;
            b++;
            if(b >= 3){
                timingCash += timingStock * stockPrice[i];
                timingStock = 0;
            }
        }
        else if(preStock == stockPrice[i]){
            a = 0;
            b = 0;
        }
        preStock = stockPrice[i];
    }
    
    int BNP = bnpCash + (bnpStock * stockPrice[13]);
    int TIMING = timingCash + (timingStock * stockPrice[13]);
    
    if(BNP == TIMING){
        cout << "SAMESAME";
    }
    else{
        cout << (BNP > TIMING ? "BNP" : "TIMING");
    }
    return 0;
}