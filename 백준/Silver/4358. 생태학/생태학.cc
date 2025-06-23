#include <iostream>
#include <map>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    map<string, float> m;
    string s;
    int total = 0;
    while(getline(cin, s)){
        m[s]++;
        total++;
    }
    
    for(const auto& [a, b] : m){
        float ratio = (b / total) * 100.0;
        cout << a << ' ' << fixed << setprecision(4) << ratio << '\n';
    }

    return 0;
}