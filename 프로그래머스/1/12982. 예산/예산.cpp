#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int sum = accumulate(d.begin(), d.end(), 0);
    
    sort(d.begin(), d.end());

    while(sum > 0){
        if(budget >= sum) return d.size();
        else {
            sum -= d.back();
            d.pop_back();
        }
    }
}