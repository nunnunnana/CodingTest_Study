#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    vector<pair<int, int>> answer;
    for(int i = 0; i < rank.size(); i++){
        if(attendance[i]) answer.push_back(make_pair(rank[i], i));
    }
    sort(answer.begin(), answer.end());
    answer.resize(3);
    return 10000 * answer[0].second + 100 * answer[1].second + answer[2].second;
}