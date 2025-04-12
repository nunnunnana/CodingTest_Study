#include <iostream>
using namespace std;

int main()
{
    int count, value;
    int result = 0;
    string strNum;
    
    cin >> count;

    cin >> strNum;
    
    for(int i = 0; i < count; i++){
        result += stoi(strNum.substr(i, 1));
    }
    
    cout << result << endl;

    return 0;
}