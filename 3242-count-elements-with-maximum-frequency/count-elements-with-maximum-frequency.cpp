class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxNum = *max_element(nums.begin(), nums.end());
        vector<int> freq(maxNum + 1, 0);
        for(int num : nums){
            freq[num]++;
        }
        sort(freq.begin(), freq.end(), greater<int>());
        
        int maxFreq = freq[0]; // Maximum frequency
        int maxFreqCount = count(freq.begin(), freq.end(), maxFreq); // Count of elements with maximum frequency
        return maxFreq * maxFreqCount;
    }
};