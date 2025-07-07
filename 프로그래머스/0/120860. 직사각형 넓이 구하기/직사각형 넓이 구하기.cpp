#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<vector<int>> dots) {
    int minX = 256, maxX = -256, minY = 256, maxY = -256;
    for(int i = 0; i < 4; i++){
        minX = min(dots[i][0], minX);
        maxX = max(dots[i][0], maxX);
        
        minY = min(dots[i][1], minY);
        maxY = max(dots[i][1], maxY);
    }
    
    int width = maxX - minX;
    int height = maxY - minY;
    
    int answer = width * height;
    return answer;
}