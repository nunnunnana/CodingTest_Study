#include <iostream>
using namespace std;

int main()
{
    int alphabetArr[26] = {0, };
    int maxCount = 0;
    int maxIndex;
    string inputStr;
    
    getline(cin, inputStr);
    
    for(int i = 0; i < inputStr.size(); i++){
        if('a' <= inputStr[i] && inputStr[i] <= 'z'){
            inputStr[i] -= 32;
        }
        alphabetArr[inputStr[i] - 'A']++;
    }
    
    for(int i = 0; i < 26; i++){
        if(alphabetArr[i] == maxCount){
            maxIndex = -2;
        }
        else if(alphabetArr[i] > maxCount){
            maxCount = alphabetArr[i];
            maxIndex = i;
        }
    }    
    
    cout << (char)('A' + maxIndex) << endl;
    
    return 0;
}