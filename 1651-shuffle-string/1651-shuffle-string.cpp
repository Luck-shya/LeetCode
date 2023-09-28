class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int l = s.size();
        char ans[l];
        for(int i=0;i<l;i++){
            ans[indices[i]]=s[i];
        }
        string final;
        for(auto it:ans){
            final+=it;
        }
        return final;
    }
};