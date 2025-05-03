#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    
    string input;
    queue<int> queue;
    for(int i = 0; i < n; i++){
        getline(cin, input);
        
        if(input.substr(0, 4) == "push") queue.push(stoi(input.substr(5)));
        else if(input == "pop"){
            if(queue.empty()) cout << "-1" << '\n';
            else {
                cout << queue.front() << '\n';
                queue.pop();
            }
        }
        else if(input == "size") cout << queue.size() << '\n';
        else if(input == "empty") cout << queue.empty() << '\n';
        else if(input == "front"){
            if(queue.empty()) cout << "-1" << '\n';
            else cout << queue.front() << '\n';
        }
        else if(input == "back"){
            if(queue.empty()) cout << "-1" << '\n';
            else cout << queue.back() << '\n';
        }
    }
    return 0;
}