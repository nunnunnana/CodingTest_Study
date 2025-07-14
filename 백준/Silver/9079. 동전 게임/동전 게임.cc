#include <iostream>
#include <vector>
using namespace std;

const int INF = 1e9;
const int N = 3;

vector<vector<pair<int, int>>> operations = {
    {{0, 0}, {0, 1}, {0, 2}},
    {{1, 0}, {1, 1}, {1, 2}}, 
    {{2, 0}, {2, 1}, {2, 2}},
    {{0, 0}, {1, 0}, {2, 0}},
    {{0, 1}, {1, 1}, {2, 1}},
    {{0, 2}, {1, 2}, {2, 2}}, 
    {{0, 0}, {1, 1}, {2, 2}}, 
    {{0, 2}, {1, 1}, {2, 0}} 
};

void apply_operation(vector<vector<char>>& board, int op) {
    for (auto [y, x] : operations[op]) {
        board[y][x] = (board[y][x] == 'H' ? 'T' : 'H');
    }
}

bool is_uniform(const vector<vector<char>>& board) {
    char first = board[0][0];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (board[i][j] != first)
                return false;
    return true;
}

int solve(vector<vector<char>> board) {
    int min_moves = INF;

    for (int mask = 0; mask < (1 << 8); mask++) {
        vector<vector<char>> temp = board;
        int moves = 0;

        for (int i = 0; i < 8; i++) {
            if (mask & (1 << i)) {
                apply_operation(temp, i);
                moves++;
            }
        }

        if (is_uniform(temp))
            min_moves = min(min_moves, moves);
    }

    return (min_moves == INF ? -1 : min_moves);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<char>> board(3, vector<char>(3));
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> board[i][j];

        cout << solve(board) << '\n';
    }
    return 0;
}