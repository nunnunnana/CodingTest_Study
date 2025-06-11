#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    stack<int> num;
    stack<char> sign;
    string n;
    
    for(int i = 0; i <= s.size(); i++){
        if(s[i] == '+' || s[i] == '-') {
            num.push((stoi(n)));
            sign.push(s[i]);
            n = "";
            i++;
        }
        else if(i == s.size()){
            num.push((stoi(n)));
            break;
        }
        n += s[i];
    }
    
    int sum = 0, result = 0;
    while(!num.empty()){
        if(!sign.empty() && sign.top() == '+' ){
            sum += num.top();
            num.pop();
            sign.pop();
        }
        else if(!sign.empty() && sign.top() == '-'){
            sum += num.top();
            result -= sum;
            sum = 0;
            num.pop();
            sign.pop();
        }
        else{
            sum += num.top();
            result += sum;
            num.pop();
            break;
        }
        
    }
    
    cout << result;

    return 0;
}