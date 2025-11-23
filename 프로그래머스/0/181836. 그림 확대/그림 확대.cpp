#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    for(int i = 0; i < k * picture.size(); i++){
        string str = "";
        for(int j = 0; j < k * picture[0].size(); j++){
            str += picture[i / k][j / k];
        }
        answer.push_back(str);
    }
    return answer;
}
