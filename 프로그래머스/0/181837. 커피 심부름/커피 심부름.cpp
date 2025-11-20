#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    for(int i = 0; i < order.size(); i++){
        answer += order[i].find("latte") != string::npos ? 5000 : 4500;
    }
    return answer;
}