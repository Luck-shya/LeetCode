class Solution {
public:
int lengthOfLIS(std::vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return n; 
        
        vector<int> dp(n, 1); 
        
        int maxLength = 1;
        
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] > nums[j]) {
                    dp[i] = max(dp[i], dp[j] + 1); // Update LIS length if a longer subsequence is found
                }
            }
            maxLength = max(maxLength, dp[i]); // Update overall LIS length
        }
        
        return maxLength;
    }
};