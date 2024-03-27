class Solution {
public:

    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        auto initialize = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
        if (k <= 1) return 0; // If k <= 1, no subarray will satisfy the condition
        
        int product = 1;
        int left = 0;
        int count = 0;
        
        for (int right = 0; right < nums.size(); ++right) {
            product *= nums[right];
            while (product >= k) {
                product /= nums[left++];
            }
            count += right - left + 1;
        }
        
        return count;
    }
};
