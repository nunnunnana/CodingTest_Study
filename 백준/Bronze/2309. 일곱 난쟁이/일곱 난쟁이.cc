#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    
    int dwarfHeight[9];
    
    for(int i = 0; i < 9; i++)
        cin >> dwarfHeight[i];
    
    sort(dwarfHeight, dwarfHeight + 9);
    
    do{
        int sum = 0;
        
        for (int i = 0; i < 7; i++) sum += dwarfHeight[i];

        if (sum == 100) {
            for (int i = 0; i < 7; i++)
                cout << dwarfHeight[i] << '\n';
            break;
        }
        
    } while(next_permutation(dwarfHeight, dwarfHeight + 9));

    return 0;
}