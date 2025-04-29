#include <iostream>
using namespace std;

int main()
{
    int h, w;
    
    cin >> h >> w;
    
    char cloud[h][w];
    
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> cloud[i][j];
        }
    }
    
    for(int i = 0; i < h; i++){
        int count = 0;
        for(int j = 0; j < w; j++){
            if(cloud[i][j] == 'c'){
                cout << 0 << ' ';
                count = 1;
            }
            else if(count > 0){
                cout << count << ' ';
                count++;
            }
            else{
                cout << -1 << ' ';
            }
        }
        cout << '\n';
    }    
    
    return 0;
}