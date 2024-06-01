class Solution {
public:
    int scoreOfString(string s) {
        int a=0;
        for(int i=1;i<s.size();i++){
            a+=abs(int(s[i-1])-int(s[i]));
        }
        return a;
    }
};