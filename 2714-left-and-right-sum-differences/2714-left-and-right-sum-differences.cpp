class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        left.push_back(0);
        for(int i=1;i<nums.size();i++){
            int d = left[i-1] + nums[i];
            left.push_back(d);
        }
        int j=0;
        for(int i=1;i<nums.size();i++){
            j+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            right.push_back(j);
            j-= nums[i];
        }
        
        vector<int> ans;
        for(int i=0;i<left.size();i++){
            int diff = abs(left[i]-right[i]);
            ans.push_back(diff);
        }
        return ans;
    }
};