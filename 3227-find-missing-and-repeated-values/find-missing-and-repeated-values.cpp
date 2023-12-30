class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
                int n = grid.size();
        std::unordered_map<int, int> countMap;
        std::vector<bool> presentMap(n * n + 1, false); 
        for (const auto& row : grid) {
            for (int val : row) {
                countMap[val]++;
                presentMap[val] = true;
                
            }
        }

        vector<int> ans;
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