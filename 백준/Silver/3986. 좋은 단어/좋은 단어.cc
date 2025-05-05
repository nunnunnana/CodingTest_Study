#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        string s;
        getline(cin, s);
        
        stack<char> stack;
        for(char c : s){
            if(!stack.empty() && stack.top() == c) stack.pop();
            else stack.push(c);
        }
        if(stack.empty()) count++;
    }
    
    cout << count;

    return 0;
}