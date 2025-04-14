#include <iostream>
using namespace std;

int main()
{
    string arrStr[5];
    int maxSize = 0;

    for(int i = 0; i < 5; i++){
        getline(cin, arrStr[i]);
        if(arrStr[i].size() > maxSize){
            maxSize = arrStr[i].size();
        }
    }

    for(int i = 0; i < maxSize; i++){
        for(int j = 0; j < 5; j++){
            if(i < arrStr[j].size()){
                cout << arrStr[j][i];
            }
        }
    }

    return 0;
}