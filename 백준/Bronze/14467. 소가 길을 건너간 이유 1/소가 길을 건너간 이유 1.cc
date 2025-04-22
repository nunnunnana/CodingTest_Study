#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int observe, cowNum, location, count = 0;
    int arrNum[10];
    
    cin >> observe;
    
    fill(arrNum, arrNum + 10, -1);
    
    for(int i = 0; i < observe; i++){
        cin >> cowNum >> location;
        
        if(arrNum[cowNum - 1] == -1)
            arrNum[cowNum - 1] = location;
        else if(arrNum[cowNum - 1] != location){
            arrNum[cowNum - 1] = location;
            count++;
        }
    }
    
    cout << count;

    return 0;
}