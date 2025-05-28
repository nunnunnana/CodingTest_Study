#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, t, b;
    cin >> a >> t >> b;
    int bb = 0, de = 0, n = 0;
    int count = 2;
    while(1){
        for(int i = 0; i < 2; i++){
            bb++;
            if(!b && bb == t){
				cout << n % a;
				return 0;
            }
            de++;
            n++;
            if(b && de == t){
				cout << n % a;
				return 0;
            }
            n++;
        }   
        for(int i = 0; i < count; i++){
            bb++;
            if(!b && bb == t){
				cout << n % a;
				return 0;
            }
            n++;
        }
        for(int i = 0; i < count; i++){
            de++;
            if(b && de == t){
				cout << n % a;
				return 0;
            }
            n++;
        }
        count++;
    }

    return 0;
}