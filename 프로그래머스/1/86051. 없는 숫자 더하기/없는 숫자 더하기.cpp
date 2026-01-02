#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    for(int i = 1; i < 10; i++){
        if(find(numbers.begin(), numbers.end(), i) != numbers.end()) continue;
        else answer += i;
    }
    return answer;
}