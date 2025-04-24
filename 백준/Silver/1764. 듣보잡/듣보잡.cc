#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

    vector<string> names(n + m), result;

    for(auto& name : names) cin >> name;

	sort(names.begin(), names.end());

	for(int i = 1; i < names.size(); i++)
		if(names[i] == names[i - 1])
		    result.push_back(names[i]);

    cout << result.size() << '\n';
    for(const auto& name : result) cout << name << '\n';
	
	return 0;
}