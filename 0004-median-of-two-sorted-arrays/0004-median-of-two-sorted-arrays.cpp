class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        double median=0;
        int mid = ans.size()/2;
        if(ans.size()%2==0){
            median = (ans[mid]+ans[mid-1])/(double)2;
        }
        else{
            median = ans[mid];
        }
        return median;
    }
};