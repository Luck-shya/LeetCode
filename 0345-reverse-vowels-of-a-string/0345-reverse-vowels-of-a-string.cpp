class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vow;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| 
            s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                vow.push_back(s[i]);
            }
        }
        string ans;
        reverse(vow.begin(),vow.end());
        int i=0;
        int vec=0;
        while(ans.size()<s.size()){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| 
            s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                ans+=vow[vec];
                vec++;
            }
            else{
                ans+=s[i];
            }
            i++;
        }
        return ans;
    }
};