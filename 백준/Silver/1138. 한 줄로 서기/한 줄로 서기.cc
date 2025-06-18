#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int& i : v){
        cin >> i;
    }
    
    vector<int> result(n, 0);
    for(int i = 0; i < n; i++){
        int count = v[i];
        
        for(int j = 0; j < n; j++) {
            if(result[j] == 0) { 
                if(count == 0) {
                    result[j] = i + 1;
                    break;
                }
                count--;
            }
        }
    }
    
    for(const int i : result){
        cout << i << ' ';
    }

    return 0;
}