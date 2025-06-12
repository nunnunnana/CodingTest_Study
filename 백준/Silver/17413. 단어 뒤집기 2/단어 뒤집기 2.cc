#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string n, result;
    bool isPass = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '<'){
            isPass = true;
            for(int j = n.size() - 1; j >= 0; j--){
                result += n[j];
            }
            n.clear();
            result += s[i];
        }
        else if(s[i] == '>'){
            isPass = false;
            result += s[i];
        }
        else if(isPass){
            result += s[i];
        }
        else if(s[i] == ' '){
            for(int j = n.size() - 1; j >= 0; j--){
                result += n[j];
            }
            n.clear();
            result += ' ';
        }
        else{
            n += s[i];
        }
    }
    
    for(int j = n.size() - 1; j >= 0; j--){
        result += n[j];
    }
    
    cout << result;
    return 0;
}

