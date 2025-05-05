#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;

    queue<int> queue;
    for(int i = 0; i < n; i++){
        queue.push(i);
    }
    while(queue.size() > 1){
        queue.pop();
        queue.push(queue.front());
        queue.pop();
    }
    
    cout << queue.front() + 1;
    return 0;
}