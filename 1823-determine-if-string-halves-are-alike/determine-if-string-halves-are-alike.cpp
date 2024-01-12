class Solution {
public:
    bool halvesAreAlike(string s) {
        int half = s.size()/2;
        string a,b;
        for(int i=0;i<half;i++){
            a+=s[i];
        }
        for(int i=half;i<s.size();i++){
            b+=s[i];
        }
        int vow_a=0,vow_b=0;
        for(int i=0;i<half;i++){
            if(a[i]=='a'|| a[i]=='e'||a[i]== 'i'||a[i]== 'o'|| a[i]=='u'||a[i]== 'A'|| a[i]=='E' 
            || a[i]=='I'||a[i]== 'O'|| a[i]=='U'){
                vow_a++;
            }
            if(b[i]=='a'|| b[i]=='e'||b[i]== 'i'||b[i]== 'o'|| b[i]=='u'||b[i]== 'A'|| b[i]=='E' 
            || b[i]=='I'||b[i]== 'O'|| b[i]=='U'){
                vow_b++;
            }
        }
        if(vow_a==vow_b){
            return true;
        }
        return false;
    }
};