class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int a = 0 , b = 0;
        bool flag = true;
        while(flag && a<nums1.size() && b<nums2.size())
        {
            if(nums1[a]<nums2[b])
            a++;
            else if(nums1[a]>nums2[b])
            b++;
            else
            flag = false;
        }
        return flag?-1 : nums1[a];
    }
};