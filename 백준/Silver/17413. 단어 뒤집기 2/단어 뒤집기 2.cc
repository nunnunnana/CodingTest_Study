#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string n, result;
    bool isTag = false;
    for(char c : s){
        if(c == '<'){
            for(int j = n.size() - 1; j >= 0; j--)
                result += n[j];
            n.clear();
            
            isTag = true;
            result += c;
        }
        else if(c == '>'){
            isTag = false;
            result += c;
        }
        else if(isTag) result += c;
        else if(c == ' '){
            for(int i = n.size() - 1; i >= 0; i--)
                result += n[i];
            n.clear();
            result += ' ';
        }
        else n += c;
    }
    
    for(int j = n.size() - 1; j >= 0; j--){
        result += n[j];
    }
    
    cout << result;
    return 0;
}

