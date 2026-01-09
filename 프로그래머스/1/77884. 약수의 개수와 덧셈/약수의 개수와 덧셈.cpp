#include <cmath>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    for(int i = left; i <= right; i++){
        int s = sqrt(i);
        
        if(s * s == i) answer -= i;
        else answer += i;
    }
    return answer;
}