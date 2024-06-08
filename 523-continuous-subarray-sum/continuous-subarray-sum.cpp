class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> remainder_map;
    remainder_map[0] = -1; // To handle the case where the subarray starts from index 0
    int prefix_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        prefix_sum += nums[i];
        
        // Get the remainder of the current prefix sum modulo k
        int remainder = prefix_sum % k;
        
        // Adjust remainder to be positive in case it is negative
        if (remainder < 0) {
            remainder += k;
        }

        // If the same remainder was seen before, check the length of the subarray
        if (remainder_map.find(remainder) != remainder_map.end()) {
            if (i - remainder_map[remainder] > 1) {
                return true;
            }
        } else {
            // Store the index of the first occurrence of this remainder
            remainder_map[remainder] = i;
        }
    }

    return false;
    }
};