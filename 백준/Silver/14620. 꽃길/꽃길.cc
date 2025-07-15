#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int board[11][11];
bool visited[11][11];
int dx[] = {0, 0, 1, -1, 0}; 
int dy[] = {0, 1, 0, 0, -1};
int minCost = 1e9;

bool canPlant(int y, int x) {
    for (int i = 0; i < 5; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || ny >= n || nx < 0 || nx >= n) return false;
        if (visited[ny][nx]) return false;
    }
    return true;
}

int plant(int y, int x) {
    int cost = 0;
    for (int i = 0; i < 5; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        visited[ny][nx] = true;
        cost += board[ny][nx];
    }
    return cost;
}

void remove(int y, int x) {
    for (int i = 0; i < 5; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        visited[ny][nx] = false;
    }
}

void dfs(int depth, int totalCost) {
    if (depth == 3) {
        minCost = min(minCost, totalCost);
        return;
    }

    for (int y = 1; y < n - 1; y++) {
        for (int x = 1; x < n - 1; x++) {
            if (canPlant(y, x)) {
                int cost = plant(y, x);
                dfs(depth + 1, totalCost + cost);
                remove(y, x);
            }
        }
    }
}

int main() {
    cin >> n;
    for (int y = 0; y < n; y++)
        for (int x = 0; x < n; x++)
            cin >> board[y][x];

    dfs(0, 0);
    cout << minCost << endl;
    return 0;
}
