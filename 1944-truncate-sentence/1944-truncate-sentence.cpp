class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans;
        int i=0;
        while(k>0 && i<s.size()){
            if(s[i]==' '){
                k--;
            }
            ans+=s[i];
            i++;
        }
        if(ans[ans.size()-1]==' '){
            ans=ans.substr(0,ans.size()-1);
        }
        return ans;
    }
};