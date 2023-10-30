class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans;
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            if(nums[left]%2==0){
                ans.push_back(nums[left]);
            }
            left++;
        }
        left=0;
        while(left<=right){
            if(nums[left]%2!=0){
                ans.push_back(nums[left]);
            }
            left++;
        }
        return ans;
    }
};