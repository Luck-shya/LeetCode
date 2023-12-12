class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int left=0;
        int right=height.size() - 1;
        while(left<right){
            int area=min(height[left],height[right])*(right-left);
            if(ans<area){
                ans=area;
            }
            if(height[left]<height[right]){
                left++;
            }
            else if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return ans;
    }
};