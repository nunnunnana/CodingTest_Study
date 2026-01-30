#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int width = 0;
    int height = 0;

    for(int i = 0; i < sizes.size(); i++){
        int width_val = 0;
        int height_val = 0;
        
        if(sizes[i][0] < sizes[i][1]){
            width_val = sizes[i][1];
            height_val = sizes[i][0];
        } else {
            width_val = sizes[i][0];
            height_val = sizes[i][1];
        }
        
        if(height < height_val){
            height = height_val;
        }
        if(width < width_val){
            width = width_val;
        }
    }
    return width * height;
}