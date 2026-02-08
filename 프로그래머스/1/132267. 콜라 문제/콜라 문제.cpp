#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    return (n > b ? n - b : 0) / (a - b) * b;
}