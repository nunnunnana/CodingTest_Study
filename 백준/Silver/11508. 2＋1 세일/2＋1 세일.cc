#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end(), [](int a, int b){return a > b;});
    
    int sum = 0;
    int i = 0, count = 0;
    while(i < n){
        if(count == 2){
            count = 0;
            i++;
            continue;
        }
        sum += v[i];
        i++;
        count++;
    }
    
    cout << sum;
    return 0;
}