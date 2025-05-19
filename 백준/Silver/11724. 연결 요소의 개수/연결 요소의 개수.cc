#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void dfs(int node){
    visited[node] = true;
    for(int i : graph[node]){
        if(!visited[i]) dfs(i);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    
    graph.resize(n + 1);
    visited.resize(n + 1, false);
    
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            dfs(i);
            count++;
        }
    }
    
    cout << count << '\n';
    
    return 0;
}