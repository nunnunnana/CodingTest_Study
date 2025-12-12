#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for(string s : babbling){
        if(s.find("aya") != string::npos){
            s.replace(s.find("aya"), 3, " ");
        }
        if(s.find("ye") != string::npos){
            s.replace(s.find("ye"), 2, " ");
        }
        if(s.find("woo") != string::npos){
            s.replace(s.find("woo"), 3, " ");
        }
        if(s.find("ma") != string::npos){
            s.replace(s.find("ma"), 2, " ");
        }
        if (s.find_first_not_of(" ") == string::npos) answer++;
    }
    return answer;
}