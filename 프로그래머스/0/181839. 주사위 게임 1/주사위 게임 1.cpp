#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b) {
    int sum = a + b;
    if(sum % 2 == 0){
        if(a % 2 != 0) return a * a + b * b;
        else return abs(a - b);
    } else {
        return 2 * sum;
    }
}