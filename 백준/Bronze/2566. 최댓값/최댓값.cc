#include <iostream>
using namespace std;

int main()
{
    int inputVal, rowNum, columnNum;
    int maxVal = -1;
    
    for (int i = 1; i <= 9; i++){
        for (int j = 1; j <= 9; j++){
            cin >> inputVal;
            
            if(maxVal <= inputVal){
                maxVal = inputVal;
                rowNum = i;
                columnNum = j;
            }
        }
    } 
    
    cout << maxVal << endl;
    cout << rowNum << " " << columnNum << endl;

    return 0;
}