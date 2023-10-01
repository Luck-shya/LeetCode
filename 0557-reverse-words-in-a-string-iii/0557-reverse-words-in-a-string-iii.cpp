class Solution {
public:
    string reverseWords(string s) {
        string ss=s+' ';
        string a;
        string ans;
        for(int i=0;i<ss.size();i++){
            if(ss[i]==' '){
                reverse(a.begin(),a.end());
                a+=' ';
                ans+=a;
                a="";
            }
            else{
                a+=s[i];
            }
        }
        ans=ans.substr(0,ans.size()-1);
        return ans;
    }
};