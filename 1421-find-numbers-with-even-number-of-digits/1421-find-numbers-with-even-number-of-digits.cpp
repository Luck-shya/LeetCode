class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int g=0;
            while(nums[i]>0){
                g++;
                nums[i]=nums[i]/10;
            }
            if(g%2==0){
                count++;
            }
        }
        return count;
    }

};