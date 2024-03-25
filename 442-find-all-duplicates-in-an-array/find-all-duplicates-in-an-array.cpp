class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicate;
        vector<int> numofoccurence(nums.size()+1);
        
        for(int i=0;i<nums.size();i++){
            numofoccurence[nums[i]]++;
        }
        for(int i=0;i<numofoccurence.size();i++){
            if(numofoccurence[i]==2){
                duplicate.push_back(i);
            }
        }
        return duplicate;
    }
};