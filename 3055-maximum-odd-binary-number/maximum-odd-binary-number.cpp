class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string h;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                h+=s[i];
                count++;
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                h+=s[i];
            }
        }

        if(count>0){
            for(int i=h.size()-2;i>=0;i--){
                if(h[i]=='1' && h[h.size()-1]=='0'){
                    h[h.size()-1]='1';
                    h[i]='0';
                    break;
                } 
            }

        }
        return h;
        
    }
};