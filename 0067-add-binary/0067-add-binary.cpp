class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        string ans{};
        int a1 = a.size()-1;
        int b1 = b.size()-1;
        while(a1>=0 || b1>=0){
            if(a1>=0){
                carry += a[a1]-'0';
            }
            if(b1>=0){
                carry +=b[b1]-'0';
            }
            ans.push_back((carry%2)+'0');
            if(carry>1){
                carry =1;
            }
            else{
                carry=0;
            }
            a1--;
            b1--;
        }
        if(carry){
            ans.push_back((carry%2)+'0');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};