#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> v;
    int count = 0;
    for(int i = 0; i < myString.size(); i++){
        if(myString[i] == 'x'){
            v.push_back(count);
            count = 0;
        }
        else count++;
    }
    v.push_back(count);
    return v;
}