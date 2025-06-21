#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
using namespace std;

int N, M;
unordered_map<string, vector<pair<int, string>>> graph;
unordered_map<string, bool> visited;
int file_cnt = 0, file_type_cnt = 0;

void dfs(const string& node) {
    for (const auto& [type, name] : graph[node]) {
        if (type == 0) {  // 파일
            file_cnt++;
            if (!visited[name]) {
                visited[name] = true;
                file_type_cnt++;
            }
        } else if (type == 1) {  // 폴더
            dfs(name);
        }
    }
}

vector<string> splitPath(const string& path) {
    vector<string> tokens;
    istringstream ss(path);
    string token;
    while (getline(ss, token, '/')) {
        tokens.push_back(token);
    }
    return tokens;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    for (int i = 0; i < N + M; i++) {
        string parent, child;
        int type;
        cin >> parent >> child >> type;
        graph[parent].emplace_back(type, child);
    }

    int Q; 
    cin >> Q;
    while (Q--) {
        string query;
        cin >> query;
        vector<string> path = splitPath(query);

        file_cnt = 0;
        file_type_cnt = 0;
        visited.clear();

        dfs(path.back());
        cout << file_type_cnt << ' ' << file_cnt << '\n';
    }
}
