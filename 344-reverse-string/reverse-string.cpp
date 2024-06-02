class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> d;
        for(int i=s.size()-1;i>=0;i--){
            d.push_back(s[i]);
        }
        s=d;

    }
};