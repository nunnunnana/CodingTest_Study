#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int n = 0;
    int idx = arr.size();
    while(idx != 1 << n){
        if(idx > 1 << n) n++;
        else if (idx < 1 << n) idx++;
    }
    arr.resize(idx, 0);
    return arr;
}