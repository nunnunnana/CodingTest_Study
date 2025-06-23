#include <iostream>
#include <vector>
#include <queue>
#include <iomanip>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    priority_queue<string, vector<string>, greater<string>> pq;
    string s;
    while(getline(cin, s)){
        pq.push(s);
    }
    
    float size = pq.size();
    string preStr = pq.top();
    pq.pop();
    
    float count = 1.0f;
    vector<pair<string, float>> v;
    while(!pq.empty()){
        if(preStr == pq.top()){
            count += 1.0f;
            pq.pop();
            continue;
        }
        float ratio = (count / size) * 100.0f;
        v.push_back({preStr, ratio});
        
        if(!pq.empty()){
            preStr = pq.top();
            pq.pop();
            count = 1.0f;
        }
    }
    
    float ratio = (count / size) * 100.0f;
    v.push_back({preStr, ratio});
    
    for(auto& [a, b] : v){
        cout << a << ' ' << fixed << setprecision(4) << b << '\n';
    }

    return 0;
}