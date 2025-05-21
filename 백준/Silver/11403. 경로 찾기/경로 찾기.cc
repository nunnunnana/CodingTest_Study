#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void dfs(int node){
    for(int i : graph[node]){
        if(!visited[i]){
            visited[i] = true;
            dfs(i);
        }
    }
}

int main()
{
    int n, m;
    cin >> n;
    
    graph.resize(n);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> m;
            if(m) graph[i].push_back(j);
        }
    }
    
    for(int i = 0; i < n; i++){
        visited.assign(n, false);
        dfs(i);
        for(int j = 0; j < n; j++){
            cout << visited[j] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}