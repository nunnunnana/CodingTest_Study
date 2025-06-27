#include <iostream>
#include <vector>
#include <stack>
#include <set>
using namespace std;

string s;
vector<pair<int, int>> v;
set<string> result;
bool visited[201];

void dfs(int index){
    for(int i = index; i < v.size(); i++) {
        auto [x, y] = v[i];
        visited[x] = visited[y] = true;
        
        string temp;
        for(int i = 0; i < s.size(); i++)
            if(!visited[i]) temp += s[i];
        result.insert(temp);
        
        dfs(i + 1);
        visited[x] = visited[y] = false;
    }
}

int main()
{
    cin >> s;
    
    stack<int> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') st.push(i);
        else if(s[i] == ')'){
            v.push_back({st.top(), i});
            st.pop();
        }
    }

    dfs(0);
    
    for(const auto& expr : result)
        cout << expr << '\n';
    
    return 0;
}