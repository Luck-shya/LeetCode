class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> losses;
        unordered_set<int> oneLossPlayers;  

        for (auto& m : matches) {
            losses[m[1]]++;
        }

        unordered_set<int> zeroLossPlayers;
        for (auto& m : matches) {
            if (losses.find(m[0]) == losses.end()) {
                zeroLossPlayers.insert(m[0]);
            }
        }

        vector<int> zeroLossVector(zeroLossPlayers.begin(), zeroLossPlayers.end());
        sort(zeroLossVector.begin(), zeroLossVector.end());

        vector<int> oneLossVector;
        for (auto& pair : losses) {
            if (pair.second == 1) {
                oneLossVector.push_back(pair.first);  // Players with one loss
            }
        }
        sort(oneLossVector.begin(), oneLossVector.end());

        return {zeroLossVector, oneLossVector};
    }
};