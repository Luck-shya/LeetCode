class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int product =1;
        int zeroes=0;
        for(int num:nums){
            if(num==0){
                zeroes++;
                continue;
            }
            product*=num;
        }
        if(zeroes==1){
            for(int i=0;i<n;i++){
                ans[i]=nums[i]==0?product:0;
            }
        }else if(zeroes==0){
            for(int i=0;i<n;i++){
                ans[i]=product/nums[i];
            }
        }
        return ans;
    }
};