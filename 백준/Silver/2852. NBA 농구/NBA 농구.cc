#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int goalCount, team, s1 = 0, s2 = 0, prev = 0, t1 = 0, t2 = 0;
    cin >> goalCount;
    
    for(int i = 0; i < goalCount; i++){
        string timer;
        cin >> team >> timer;
        int curr = stoi(timer.substr(0, 2)) * 60 + stoi(timer.substr(3, 2));
        
        if (s1 > s2) t1 += curr - prev;
        else if (s2 > s1) t2 += curr - prev;
        
        (team == 1 ? s1 : s2)++;
        prev = curr;
    }
    
    if (s1 > s2) t1 += 48 * 60 - prev;
    else if (s2 > s1) t2 += 48 * 60 - prev;
    
    auto printTime = [](int sec) {
        cout << setfill('0') << setw(2) << sec / 60 << ":" << setfill('0') << setw(2) << sec % 60 << '\n';
    };
    
    printTime(t1);
    printTime(t2);
    return 0;
}