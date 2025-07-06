#include <iostream>
#include <vector>
using namespace std;

vector<int> graph;
vector<bool> visited;
vector<int> result;

void dfs(int node, int start){
    if(visited[node]){
        if(node == start) result.push_back(node);
        return;
    }
    visited[node] = true;
    dfs(graph[node], start);
}

int main()
{
    int n;
    cin >> n;
    
    graph.resize(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> graph[i];
    }
    
    for(int i = 1; i <= n; i++){
        visited.assign(n + 1, false);
        dfs(i, i);
    }

    cout << result.size() << '\n';
    for(const int i : result){
        cout << i << '\n';
    }

    return 0;
}