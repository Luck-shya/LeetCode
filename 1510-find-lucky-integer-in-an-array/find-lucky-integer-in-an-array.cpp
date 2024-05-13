class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]== arr[i]){
                ans.push_back(arr[i]);
            }
        }
        if(ans.size()>0){
            return *max_element(ans.begin(),ans.end());
        }
        return -1;
    }
};