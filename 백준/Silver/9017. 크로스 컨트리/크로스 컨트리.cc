#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <numeric>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    for(int i = 0; i < T; i++){
        int N;
        cin >> N;
        vector<int> input(N);
        unordered_map<int, int> team_count;
        
        for (int j = 0; j < N; j++) {
            cin >> input[j];
            team_count[input[j]]++;
        }
        
        map<int, vector<int>> team_scores;
        unordered_map<int, int> valid_team_count;
        int rank = 1;
        
        for (int j = 0; j < N; j++) {
            int team = input[j];
            if (team_count[team] >= 6) {
                team_scores[team].push_back(rank++);
                valid_team_count[team]++;
            }
        }

        int winner = -1;
        int best_score = 1e9;
        int best_fifth = 1e9;

        for (auto& [team_id, scores] : team_scores) {
            int sum = scores[0] + scores[1] + scores[2] + scores[3];
            int fifth = scores[4];

            if (sum < best_score || (sum == best_score && fifth < best_fifth)) {
                best_score = sum;
                best_fifth = fifth;
                winner = team_id;
            }
        }

        cout << winner << '\n';
    }
    return 0;
}