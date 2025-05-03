#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    
    string input;
    stack<int> stack;
    for(int i = 0; i < n; i++){
        getline(cin, input);
        
        if(input.find("push") != string::npos){
            stack.push(stoi(input.substr(5)));
        }
        else if(input == "pop"){
            if(stack.empty()) cout << "-1" << '\n';
            else {
                cout << stack.top() << '\n';
                stack.pop();
            }
        }
        else if(input == "size"){
            stack.size();
            cout << stack.size() << '\n';
        }
        else if(input == "empty"){
            stack.empty();
            cout << stack.empty() << '\n';
        }
        else if(input == "top"){
            if(stack.empty()) cout << "-1" << '\n';
            else {
                stack.top();
                cout << stack.top() << '\n';
            }
        }
    }
    

    return 0;
}