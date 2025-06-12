#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int count = 0;
    vector<long long> min, max;
    for(int i = 0; i <= n.size(); i++){
        if(n[i] == 'M'){
            if(n[i - 1] == 'M'){
                min.push_back(0);
            }
            else{
                min.push_back(1);
            }
            count++;
            if(i == n.size() - 1) {
                for(int j = 0; j < count; j++){
                    max.push_back(1);
                }
            }
        }
        else if(n[i] == 'K'){
            min.push_back(5);
            max.push_back(5 * pow(10, count));
            count = 0;
        }
    }
    for(const long long i : max){
        cout << i;
    }
    cout << '\n';
    for(const long long i : min){
        cout << i;
    }
    return 0;
}