#include <iostream>
#include <unordered_map>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);  
    cin.tie(0);             
    
    int n, m;
    cin >> n >> m;
    
    vector<string> name(n + 1);
    unordered_map<string, int> nameNum;
    
    for(int i = 1; i <= n; i++){
        cin >> name[i];
        nameNum[name[i]] = i;
    }
    
    string input;
    
    for(int i = 0; i < m; i++){
        cin >> input;
        if(isdigit(input[0])){
            cout << name[stoi(input)] << '\n';
        }
        else{
            cout << nameNum[input] << '\n';
        }
    }

    return 0;
}