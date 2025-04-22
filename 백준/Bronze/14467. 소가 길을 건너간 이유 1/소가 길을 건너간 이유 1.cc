#include <iostream>
using namespace std;

int main()
{
    int n, cow, pos, count = 0;
    int state[11] = {-1};
    fill(state + 1, state + 11, -1);
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> cow >> pos;
        if (state[cow] == -1) state[cow] = pos;
        else if (state[cow] != pos) {
            state[cow] = pos;
            count++;
        }
    }
    
    cout << count;
    return 0;
}