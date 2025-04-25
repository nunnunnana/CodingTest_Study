#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    int index = 0;
    int count = 0;
    string input;
    
    cin >> input;
    
    while(1){
        N++;
        string s = to_string(N);
        for(char ch : s){
            if(ch == input[index]){
                index++;
                count++;
            }
        }
        
        if(count == input.size()) break;

    }
    cout << N;

    return 0;
}