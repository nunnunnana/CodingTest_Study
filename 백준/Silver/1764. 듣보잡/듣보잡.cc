#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, m, count = 0;
	string prevName;

	cin >> n >> m;

	int total = n + m;

	string name[total];
	string targetName[total];

	for(int i = 0; i < total; i++) {
		cin >> name[i];
	}

	sort(name, name + total);

	for(int i = 0; i < total; i++) {
		if(prevName == name[i]){
		    targetName[count] = name[i];
		    count++;
		}
		prevName = name[i];
	}

    cout << count << '\n';
    
	for(int i = 0; i < count; i++) {
		cout << targetName[i] << '\n';
	}
	
	return 0;
}