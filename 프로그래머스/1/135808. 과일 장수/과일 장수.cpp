#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.begin(), score.end());
    for(int i = score.size() - 1; i > 0; i -= m){
        int min = score[i];
        for(int j = i - m + 1; j < i; j++){
            if(min > score[j]) min = score[j];
        }
        
        answer += min * m;
    }
    
    return answer;
}