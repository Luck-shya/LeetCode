class Solution {
public:
    std::vector<int> findErrorNums(std::vector<int>& nums) {
        int duplicate = -1, missing = -1;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            while (nums[i] != i + 1) {
                if (nums[i] == nums[nums[i] - 1]) {
                    duplicate = nums[i];
                    break;
                }
                std::swap(nums[i], nums[nums[i] - 1]);
            }
        }

        // Calculate missing number
        for (int i = 0; i < n; ++i) {
            if (nums[i] != i + 1) {
                missing = i + 1;
                break;
            }
        }

        return {duplicate, missing};
    }
};
