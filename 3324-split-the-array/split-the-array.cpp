class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x : nums){
            mp[x]++;

        }
        for(auto x : nums){
            if(mp[x]>2){
                return false;
            }
        }
        return true;
    }
};