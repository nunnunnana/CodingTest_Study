#include <iostream>
#include <queue>
#include <vector>
#include <tuple>

using namespace std;

int R, C;
vector<string> forest;
queue<pair<int, int>> water_q;
queue<tuple<int, int, int>> hedgehog_q;
vector<vector<int>> hedgehog_dist;
vector<vector<int>> water_time;

int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};

void bfs_water() {
    while (!water_q.empty()) {
        int r = water_q.front().first;
        int c = water_q.front().second;
        water_q.pop();

        for (int i = 0; i < 4; ++i) {
            int nr = r + dr[i];
            int nc = c + dc[i];

            if (nr >= 0 && nr < R && nc >= 0 && nc < C && forest[nr][nc] == '.' && water_time[nr][nc] == -1) {
                water_time[nr][nc] = water_time[r][c] + 1;
                water_q.push({nr, nc});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> R >> C;

    forest.resize(R);
    hedgehog_dist.assign(R, vector<int>(C, -1));
    water_time.assign(R, vector<int>(C, -1));

    for (int i = 0; i < R; ++i) {
        cin >> forest[i];
        for (int j = 0; j < C; ++j) {
            if (forest[i][j] == 'S') {
                hedgehog_q.push({i, j, 0});
                hedgehog_dist[i][j] = 0;
            } else if (forest[i][j] == '*') {
                water_q.push({i, j});
                water_time[i][j] = 0;
            }
        }
    }

    bfs_water();

    while (!hedgehog_q.empty()) {
        auto [r, c, dist] = hedgehog_q.front();
        hedgehog_q.pop();

        if (forest[r][c] == 'D') {
            cout << dist << endl;
            return 0;
        }

        for (int i = 0; i < 4; ++i) {
            int nr = r + dr[i];
            int nc = c + dc[i];
            int next_dist = dist + 1;

            if (nr >= 0 && nr < R && nc >= 0 && nc < C && forest[nr][nc] != 'X' && hedgehog_dist[nr][nc] == -1) {
                if (forest[nr][nc] == 'D') {
                    hedgehog_q.push({nr, nc, next_dist});
                    hedgehog_dist[nr][nc] = next_dist;
                } else if (water_time[nr][nc] == -1 || next_dist < water_time[nr][nc]) {
                    hedgehog_q.push({nr, nc, next_dist});
                    hedgehog_dist[nr][nc] = next_dist;
                }
            }
        }
    }

    cout << "KAKTUS" << endl;

    return 0;
}