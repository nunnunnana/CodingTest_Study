#include <iostream>
#include<ctype.h>
using namespace std;

int main()
{
    int testNum;
    
    cin >> testNum;
    cin.ignore();

    
    for(int i = 0; i < testNum; i++){
        int alphabetArr[26] = { 0, };
        int maxNum = 0, maxCount = 0, maxIndex = 0;
        string arrStr;
        getline(cin, arrStr);
        
        for (int j = 0; j < arrStr.size(); j++){
            if (isalpha(arrStr[j])){
                alphabetArr[arrStr[j] - 'a']++;
            }
        }
        
        for (int j = 0; j < 26; j++){
            if (maxNum < alphabetArr[j]){
                maxNum = alphabetArr[j];
                maxIndex = j;
            }
        }
        for (int j = 0; j < 26; j++){
            if (maxNum == alphabetArr[j]){
                maxCount++;
            }
        }
        
        
        if (maxCount == 1){
            cout << (char)('a' + maxIndex) << endl;
        }
        else{
            cout << "?" << endl;
        }
        
        
    }

    return 0;
}