#include <string>
#include <algorithm>
#include <vector>

using namespace std;
bool allSame(const string& s) {
    if (s.empty()) return false;
    return all_of(s.begin(), s.end(), [&](char c){
        return c == s[0];
    });
}

int solution(vector<string> babbling) {
    int answer = 0;
    for(int i = 0; i < babbling.size(); i++){
        string s = babbling[i];
        while(1){
            if(allSame(s) && s.size() > 1){
                answer++;
                break;
            }
            if(s.find("aya") != string::npos){
                s.replace(s.find("aya"), 3, "zzz");
                continue;
            } else if(s.find("ye") != string::npos){
                s.replace(s.find("ye"), 2, "zz");
                continue;
            } else if(s.find("woo") != string::npos){
                s.replace(s.find("woo"), 3, "zzz");
                continue;
            } else if(s.find("ma") != string::npos){
                s.replace(s.find("ma"), 2, "zz");
                continue;
            } else break;
        }
    }
    return answer;
}