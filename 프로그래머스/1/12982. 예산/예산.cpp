#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int result = 0;
    sort(d.begin(), d.end());
    for(int i = 0; i < d.size(); i++){
        if(budget >= d[i]){
            budget -= d[i];
            result++;
        }
        else break;
        
    }
    return result;
}