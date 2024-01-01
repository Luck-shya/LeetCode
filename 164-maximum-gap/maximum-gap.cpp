class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int maxdiff = 0;
        sort(nums.begin(),nums.end());
        if(nums.size()>1){
            for(int i=1;i<nums.size();i++){
                if(nums[i]-nums[i-1]>maxdiff){
                    maxdiff=nums[i]-nums[i-1];
                }
            }
            return maxdiff;
        }
        return maxdiff;


    }
};