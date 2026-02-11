#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    map<char, set<string>> m;
    for(int i = 0; i < strings.size(); i++){
        m[strings[i][n]].insert(strings[i]);
    }

    for (const auto& pair : m) {
        for (const auto& s : pair.second) {
            answer.push_back(s);
        }
    }
    return answer;
}