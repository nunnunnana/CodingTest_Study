#include<cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    if(sqrt(n) == floor(sqrt(n))) return (sqrt(n) + 1) * (sqrt(n) + 1);
    else return -1;
}