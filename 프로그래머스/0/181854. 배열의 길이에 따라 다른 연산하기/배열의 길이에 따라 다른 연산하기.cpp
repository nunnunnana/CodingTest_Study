#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    int idx = arr.size() % 2 ? 0 : 1;
    for(int i = idx; i < arr.size(); i += 2){
        arr[i] += n;
    }
    return arr;
}