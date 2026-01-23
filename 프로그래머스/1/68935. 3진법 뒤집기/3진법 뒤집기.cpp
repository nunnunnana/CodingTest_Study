#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    string str = "";
    while (n > 0) {
        str += to_string(n % 3);
        n /= 3;
    }
    
    int answer = 0;
    for (int i = 0; i < str.length(); i++) {
        answer += (str[i] - '0') * pow(3, str.length() - 1 - i);
    }
    
    return answer;
}