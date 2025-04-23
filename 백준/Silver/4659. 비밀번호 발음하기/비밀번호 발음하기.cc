#include <iostream>
using namespace std;

int main()
{
    string password;
    
    while(1){
        cin >> password;
        
        if(password == "end") break;
        
        int a = 0, b = 0;
        bool isGather = false;
        int count = 0;
        char preWord = 0;
        
        for(int i = 0; i < password.size(); i++){
            if(password[i] == 'a' || password[i] == 'e' || password[i] == 'i' || password[i] == 'o' || password[i] == 'u'){
                isGather = true;
                a++;
                if(a == 3) count++;
                b = 0;
            }
            else{
                b++;
                if(b == 3) count++;
                a = 0;
            }
            if(password[i] == preWord && password[i] != 'e' && password[i] != 'o'){
                count++;
            }
            
            preWord = password[i];
        }
        
        if(isGather == true && count < 1){
            cout << '<' << password << '>'  << " is acceptable." << '\n';
        }
        else cout << '<' << password << '>'  << " is not acceptable." << '\n';
    }

    return 0;
}