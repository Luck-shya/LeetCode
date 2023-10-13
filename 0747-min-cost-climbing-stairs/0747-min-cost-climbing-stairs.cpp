class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> p(n + 1, 0);

        for (int i = 2; i <= n; i++) {
            p[i] = min(p[i - 1] + cost[i - 1], p[i - 2] + cost[i - 2]);
        }
        return p[n];
    }
};