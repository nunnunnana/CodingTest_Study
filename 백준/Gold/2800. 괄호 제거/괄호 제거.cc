#include <iostream>
#include <vector>
#include <stack>
#include <set>
using namespace std;

bool visited[201];
vector<pair<int, int>> v;
set<string> result;
string s;

void dfs(int index, int delete_cnt){
    
    if(delete_cnt >= 1){
        string temp = "";
        for(int i = 0; i < s.length(); i++){
            if(!visited[i]) temp+=s[i];
        }
        result.insert(temp);
    }
    
    for(int i = index; i < v.size(); i++){
        visited[v[i].first] = 1;
        visited[v[i].second] = 1;
        dfs(i+1, delete_cnt+1);
        visited[v[i].first] = 0;
        visited[v[i].second] = 0;
    }
}

int main()
{
    cin >> s;
    
    stack<int> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            st.push(i);
        }
        else if(s[i] == ')'){
            v.push_back({st.top(), i});
            st.pop();
        }
    }

    dfs(0,0);
    
    for(auto it = result.begin(); it != result.end(); it++){
        cout << *it << '\n';
    }
    return 0;
}