#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	
	string word;
	map<string, int> freq;
	
    for (int i = 0; i < n; i++) {
        cin >> word;
        if (word.length() >= m) 
            freq[word]++;
    }
    
    vector<string> words;
    for(auto& p : freq)
        words.push_back(p.first);
    
    sort(words.begin(), words.end(), [&](const string& a, const string& b) {
        if (freq[a] != freq[b]) return freq[a] > freq[b];
        if (a.length() != b.length()) return a.length() > b.length();
        return a < b;
    });
	
    for(const auto& word : words) cout << word << '\n';

	return 0;
}