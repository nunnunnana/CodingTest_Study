#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int N;
vector<int> numbers;
int op[4]; // + - * /
int maxResult = INT_MIN;
int minResult = INT_MAX;

int calc(int a, int b, int oper) {
    switch (oper) {
        case 0: return a + b;
        case 1: return a - b;
        case 2: return a * b;
        case 3: 
            if (a < 0) return -(-a / b);
            else return a / b;
    }
    return 0;
}

void dfs(int depth, int current) {
    if (depth == N) {
        maxResult = max(maxResult, current);
        minResult = min(minResult, current);
        return;
    }

    for (int i = 0; i < 4; i++) {
        if (op[i] > 0) {
            op[i]--;
            int next = calc(current, numbers[depth], i);
            dfs(depth + 1, next);
            op[i]++;
        }
    }
}

int main() {
    cin >> N;
    numbers.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < 4; i++) {
        cin >> op[i];
    }

    dfs(1, numbers[0]);

    cout << maxResult << '\n' << minResult << '\n';
    return 0;
}
