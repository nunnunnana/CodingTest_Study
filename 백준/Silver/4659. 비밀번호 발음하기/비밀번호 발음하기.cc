#include <iostream>
using namespace std;

bool isVowel(char c){
    return string("aeiou").find(c) != string::npos;
}


int main()
{
    string pw;
    
    while(cin >> pw && pw != "end"){
        bool hasVowel = false;
        int v = 0, c = 0, count = 0;
        char prev = 0;
        
        for(char ch : pw){
            if(isVowel(ch)){
                hasVowel = true;
                v++;
                c = 0;
            }
            else{
                c++;
                v = 0;
            }
            
            if(v == 3 || c == 3) count++;
            if(ch == prev && ch != 'e' && ch != 'o') count++;
            
            prev = ch;
        }
        cout << '<' << pw << "> is "  << (hasVowel && count == 0 ? "acceptable." : "not acceptable.") << '\n';
    }

    return 0;
}