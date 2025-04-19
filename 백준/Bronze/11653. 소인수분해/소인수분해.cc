#include <iostream>
using namespace std;

int main() {
    int input;
    
    cin >> input;
    int i = 2;
    
    while(1){

        if(input % i == 0){
            input /= i;
            cout << i << '\n';
            i = 2;
        }
        else i++;
        
        if(input == 1){
            break;
        }
    }
    
    return 0;
}