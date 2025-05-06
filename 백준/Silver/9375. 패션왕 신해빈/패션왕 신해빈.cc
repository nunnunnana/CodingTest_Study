#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
    for (int i = 0; i < n; i++) {
        int m;
	    cin >> m;
        unordered_map<string, int> clothes;
        
        for (int j = 0; j < m; j++) {
            string name, type;
            cin >> name >> type;
            clothes[type]++;
        }
        int result = 1;
        
        for (const auto c : clothes) result *= (c.second + 1);
        cout << result - 1 << '\n';
    }
	return 0;
}