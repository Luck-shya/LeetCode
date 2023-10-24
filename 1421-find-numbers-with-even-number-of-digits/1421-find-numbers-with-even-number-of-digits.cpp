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
        int g=0;
        while(a>0){
            g++;
            a=a/10;
        }
        if(g%2==0){
            return true;
        }
        return false;
    }
};