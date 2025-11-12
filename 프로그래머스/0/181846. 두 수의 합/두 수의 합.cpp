#include <string>
#include <algorithm>

using namespace std;

string solution(string a, string b) {
    if (a.size() < b.size()) swap(a, b);
    while (b.size() < a.size()) b = '0' + b;
    int i = a.size() - 1;
    int carry = 0;
    string answer = "";
    while(i >= 0){
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        carry = sum / 10;
        answer.push_back((sum % 10) + '0');
        i--;
    }
    if (carry > 0) answer.push_back(carry + '0');
    
    reverse(answer.begin(), answer.end());
    return answer;
}