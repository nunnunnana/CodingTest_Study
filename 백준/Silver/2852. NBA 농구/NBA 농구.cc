#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int goalCount, team, score1 = 0, score2 = 0;
    int prevTime = 0, winTime1 = 0, winTime2 = 0;
    string timer;
    
    cin >> goalCount;
    
    for(int i = 0; i < goalCount; i++){
        cin >> team >> timer;
        int currentTime = stoi(timer.substr(0, 2)) * 60 + stoi(timer.substr(3, 2));
        if (score1 > score2) {
            winTime1 += (currentTime - prevTime);
        } else if (score2 > score1) {
            winTime2 += (currentTime - prevTime);
        }
        if (team == 1) score1++;
        else score2++;
        prevTime = currentTime;
    }
    
    if (score1 > score2) {
        winTime1 += (48*60 - prevTime);
    } else if (score2 > score1) {
        winTime2 += (48*60 - prevTime);
    }
    
    cout << setfill('0') << setw(2) << winTime1 / 60 << ":" << setfill('0') << setw(2) << winTime1 % 60 << '\n';
    cout << setfill('0') << setw(2) << winTime2 / 60 << ":" << setfill('0') << setw(2) << winTime2 % 60 << '\n';
    return 0;
}