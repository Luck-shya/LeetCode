class Solution {
public:
    bool isSubsequence(string s, string t) {
        int q=0;
        int g = t.size();
        int i=0;
        int find=-1;
        while(g>0){
            if(s[i]==t[q]){
                if(find<q){
                    find=q;
                }
                else{
                    return false;
                }
                q++;
                i++;
            }
            else{
                q++;
            }
            g--;
        }
        if(i!=s.size()){
            return false;
        }
        return true;
    }
};