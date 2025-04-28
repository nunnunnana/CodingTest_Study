#include <iostream>
using namespace std;

int main()
{
    int cash, price[14];
    
    cin >> cash;
    int bnpCash = cash, bnpStock = 0;
    int timingCash = cash, timingStock = 0;
    
    for (int& p : price) cin >> p;
    
    for(int i = 0; i < 14; i++){
        if(bnpCash >= price[i]){
            bnpStock += bnpCash / price[i];
            bnpCash %= price[i];
        }
        if(i >= 3){
            if (price[i-3] < price[i-2] && price[i-2] < price[i-1] && price[i-1] < price[i]) {
                timingCash += timingStock * price[i];
                timingStock = 0;
            }
            if (price[i-3] > price[i-2] && price[i-2] > price[i-1] && price[i-1] > price[i]) {
                timingStock += timingCash / price[i];
                timingCash %= price[i];
            }
        }
    }
    
    int bnp_total = bnpCash + (bnpStock * price[13]);
    int timing_total = timingCash + (timingStock * price[13]);
    
    if(bnp_total == timing_total) cout << "SAMESAME";
    else cout << (bnp_total > timing_total ? "BNP" : "TIMING");

    return 0;
}