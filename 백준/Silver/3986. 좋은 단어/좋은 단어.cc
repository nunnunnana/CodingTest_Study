#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        string input = {};
        getline(cin, input);
        
        stack<char> stack = {};
        stack.push(input[0]);
        
        for(int j = 1; j < input.size(); j++){
            if(!stack.empty() && stack.top() == input[j]){
                stack.pop();
            }
            else{
                stack.push(input[j]);
            }
        }
        if(stack.empty()){
            count++;
        }
    }
    
    cout << count;

    return 0;
}