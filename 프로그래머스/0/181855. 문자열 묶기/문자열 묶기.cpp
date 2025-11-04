#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    vector<int> answer;
    answer.resize(31);
    for(int i = 0; i < strArr.size(); i++){
        answer[strArr[i].length()]++;
    }
    auto maxIterator = max_element(answer.begin(), answer.end());
    int maxValue = *maxIterator;
    return maxValue;
}