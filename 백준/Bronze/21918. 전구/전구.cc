#include <iostream>
using namespace std;

int main() {
    int n, m, state;

    cin >> n >> m;
    
    int lightState[n+1] = {-1};
    
    for(int i = 1; i <= n; i++){
        cin >> state;
        lightState[i] = state;
    }
    
    int a, b, c;
    
    for(int i = 1; i <= m; i++){
        cin >> a >> b >> c;
        
        switch (a)
        {
            case 1:
                lightState[b] = c;
                break;
            case 2:
                for(int i = b; i <= c; i++)
                    lightState[i] = !lightState[i];
                break;
            case 3:
                for(int i = b; i <= c; i++)
                    lightState[i] = 0;
                break;
            case 4:
                for(int i = b; i <= c; i++)
                    lightState[i] = 1;
                break;
        }    
    }

    for(int i = 1; i <= n; i++)
        cout << lightState[i] << ' ';
    return 0;
}