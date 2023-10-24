class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(even(nums[i])){
                count++;
            }
        }
        return count;
    }
    bool even(int a){
        string s =to_string(a);
        if(s.size()%2==0){
            return true;
        }
        return false;
    }
};