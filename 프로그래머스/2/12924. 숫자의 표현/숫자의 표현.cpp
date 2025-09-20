#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int count = 0;
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            answer += j;
            if(answer > n){
                answer = 0;
                break;
            }
            else if(answer == n){
                count++;
                break;
            }
        }
    }
    return count;
}