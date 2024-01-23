class Solution {
public:
    std::vector<int> findErrorNums(std::vector<int>& nums) {
        unordered_map<int,int> s;
        int duplicate;
        int missing;
        int curr=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            s[nums[i]]++;
            curr+=nums[i];
            if(s[nums[i]]>1){
                duplicate = nums[i];
            }
        }
        int sum = n* (n+1)/2;
        int m = sum-curr;
        missing = duplicate + m;
        return {duplicate,missing};
    }
};