#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 1;
    int pivot = section[0];
    for(int i = 0; i < section.size(); i++){
        if(pivot + m > section[i]) continue;
        else {
            pivot = section[i];
            answer++;
        }
    }
    return answer;
}