#include <iostream>
#include <vector>
using namespace std;

vector<int> graph;
vector<bool> visited;
int count = 0;

int dfs(int node){
    visited[node] = true;
    if(graph[node] == -1) return 0;
    int i = graph[node];
    if(!visited[i]){
        count++;
        dfs(i);
    }
    else count = -1;
        
    return count;
}

int main()
{
    int n, m, p;
    cin >> n >> m >> p;
    
    graph.resize(m + 1, -1);
    visited.resize(m + 1, false);
    
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if(graph[b] == -1) graph[b] = a;
    }
    cout << dfs(p) << '\n';
    
    return 0;
}