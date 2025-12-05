#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    if(arr.size() > arr[0].size()){
        for(int i = 0; i < arr.size(); i++){
            arr[i].resize(arr.size());
        }
    } else {
        arr.resize(arr[0].size(), vector<int>(arr[0].size()));
    }
    return arr;
}