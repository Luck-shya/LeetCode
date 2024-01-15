#include <unordered_map>
#include <unordered_set>
#include <vector>

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> losses;
        unordered_set<int> oneLossPlayers;  // To keep track of players with one loss

        for (auto m : matches) {
            losses[m[1]]++;
        }

        unordered_set<int> zeroLossPlayers;
        for (auto m : matches) {
            if (losses.find(m[0]) == losses.end()) {
                zeroLossPlayers.insert(m[0]);
            }
        }

        vector<int> a(zeroLossPlayers.begin(), zeroLossPlayers.end());
        sort(a.begin(),a.end());
        vector<vector<int>> ans;
        ans.push_back(a);
        vector<int> b;

        for (auto &pair : losses) {
            if (pair.second == 1) {
                b.push_back(pair.first);  // Players with one loss
            }
        }
        sort(b.begin(),b.end());
        ans.push_back(b);
        return ans;
    }
};
