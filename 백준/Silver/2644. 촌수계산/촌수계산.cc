#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> graph;
vector<int> visited;

int bfs(int x, int y){
    queue<int> q;
    q.push(x);
    visited[x] = 0;
    
    while(!q.empty()){
        int node = q.front();
        q.pop();
        
        for(int i : graph[node]){
            if(visited[i] == -1){
                visited[i] = visited[node] + 1;
                q.push(i);
            }
        }
    }
    
    return visited[y];
}

int main()
{
    int n, a, b, m;
    cin >> n >> a >> b >> m;
    
    graph.resize(n + 1);
    visited.resize(n + 1, -1);
    
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    
    cout << bfs(a, b);

    return 0;
}