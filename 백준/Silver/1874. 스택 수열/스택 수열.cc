#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int m[n];
    int num = 1;
    stack<int> stack;
    vector<char> result;
    for(int& i : m){
        cin >> i;
        
        while(num <= i){
            stack.push(num++);
            result.push_back('+');
        }
        if(stack.top() == i){
            stack.pop();
            result.push_back('-');
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    
    for(const char c : result){
        cout << c << '\n';
    }

    return 0;
}