class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroes=0,ones=0,two=0;
        for(int num:nums){
            if(num==0){
                zeroes++;
            }
            else if(num==1){
                ones++;
            }
            else{
                two++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i<zeroes){
                nums[i]=0;
            }else if(i<zeroes+ones){
                nums[i]=1;
            }
            else{
                nums[i]=2;
            }
        }
    }
};