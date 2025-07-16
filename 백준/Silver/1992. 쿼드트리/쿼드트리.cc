#include <iostream>
#include <vector>
using namespace std;

int n;
vector<vector<char>> board;

bool isSame(int x, int y, int size) {
    char first = board[x][y];
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (board[i][j] != first) return false;
        }
    }
    return true;
}

string quadTree(int x, int y, int size) {
    if (isSame(x, y, size)) {
        return string(1, board[x][y]);
    }
    int half = size / 2;
    string result = "(";
    result += quadTree(x, y, half);              
    result += quadTree(x, y + half, half);       
    result += quadTree(x + half, y, half);         
    result += quadTree(x + half, y + half, half);  
    result += ")";
    return result;
}

int main() {
    cin >> n;
    board.resize(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < n; j++) {
            board[i][j] = row[j];
        }
    }

    cout << quadTree(0, 0, n) << '\n';
    return 0;
}
