class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans.push_back(i);
            }
        }
        vector<int> final;
        if(ans.size()>0){
            final.push_back(ans[0]);
            final.push_back(ans[ans.size()-1]);
            return final;
        }
        else{
            final.push_back(-1);
            final.push_back(-1);
            return final;
        }
    }
};