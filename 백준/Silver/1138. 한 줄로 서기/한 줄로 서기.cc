#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> taller_count(n); // input: 키 1~n인 사람들의 기억
    for (int i = 0; i < n; i++) {
        cin >> taller_count[i];
    }

    vector<int> result(n, 0); // 최종 줄

    for (int i = 0; i < n; i++) {
        int count = taller_count[i]; // 내 왼쪽에 있어야 할 큰 사람 수
        int pos = 0;

        for (int j = 0; j < n; j++) {
            if (result[j] == 0) { // 빈 자리일 때만 count 감소
                if (count == 0) {
                    result[j] = i + 1; // 키는 i+1
                    break;
                }
                count--;
            }
        }
    }

    for (int k : result) {
        cout << k << ' ';
    }

    return 0;
}
