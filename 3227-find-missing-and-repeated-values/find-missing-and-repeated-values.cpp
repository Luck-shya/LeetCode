class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        std::unordered_map<int, int> countMap;
        std::unordered_map<int, bool> presentMap;

        for (const auto& row : grid) {
            for (int val : row) {
                if (val > 0) {
                    countMap[val]++;
                    presentMap[val] = true;
                }
            }
        }

        std::vector<int> ans;
        for (auto p : countMap) {
            if (p.second > 1) {
                ans.push_back(p.first);
            }
        }

        for (int i = 1; i <= n * n; ++i) {
            if (!presentMap[i]) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};