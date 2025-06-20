#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    
    vector<int> v(w);
    for(int& i : v){
        cin >> i;
    }
    
    int count = 0;
    for(int i = 0; i < w; i++){
        int left = 0, right = 0;
        for(int j = 0; j < i; j++)
            left = max(v[j], left);
        
        for(int j = w - 1; j >= i; j--)
            right = max(v[j], right);
        
        int water = min(left, right) - v[i];
        if (water > 0) count += water;
    }
    
    cout << count;
    return 0;
}