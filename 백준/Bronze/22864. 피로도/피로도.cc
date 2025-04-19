#include <iostream>
using namespace std;

int main()
{
    int A, B, C, M, fatigue = 0, work = 0;
    
    cin >> A >> B >> C >> M;

    if (A > M) {
        cout << 0;
        return 0;
    }
    
    for (int i = 0; i < 24; i++) {
        if (fatigue + A <= M) {
            fatigue += A;
            work += B;
        } else {
            fatigue = max(0, fatigue - C);
        }
    }
        
    cout << work;
    
    return 0;
}