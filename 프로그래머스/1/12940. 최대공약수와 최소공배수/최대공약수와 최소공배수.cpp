#include <string>
#include <vector>

using namespace std;

int GetGCD(int a, int b){
    if(a % b == 0) return b;
    else return GetGCD(b, a % b);
}

vector<int> solution(int n, int m) {
    int gcd = GetGCD(n, m);
    int lcm = (n * m) / gcd; 
    return {gcd, lcm};
}