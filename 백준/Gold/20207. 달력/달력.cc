#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> calendar(366, 0);
    for(int i = 0; i < n; i++){
        int s, e;
        cin >> s >> e;
        for(int j = s; j <= e; j++) {
            calendar[j]++;
        }
    }
    
    int width = 0, height = 0, result = 0;
    for(int i = 1; i < 366; i++){
        if(calendar[i] > 0){
            width++;
            height = max(calendar[i], height);
        }
        else{
            result += width * height;
            width = 0;
            height = 0;
        }
    }
    
    if(width > 0) result += width * height;
    
    cout << result;

    return 0;
}