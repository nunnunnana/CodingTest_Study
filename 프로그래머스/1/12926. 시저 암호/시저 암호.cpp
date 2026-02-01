#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s, int n) {
    for(int i = 0; i < s.size(); i++){
        char z = 'z';
        if(s[i] == ' ') continue;
        z = isupper(s[i]) ? 'Z' : 'z';
        if(s[i] + n > z){
            s[i] = (s[i] - 26) + n;
        }
        else s[i] += n;
    }
    return s;
}