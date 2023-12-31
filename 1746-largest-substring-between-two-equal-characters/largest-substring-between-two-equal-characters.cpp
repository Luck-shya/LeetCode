class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int> maxi;
        for(int i=0;i<s.size();i++){
            for(int j=s.size()-1;j>=0;j--){
                if(s[i]==s[j]){
                    maxi.push_back(j-i-1);
                }
            }
        }
        if(maxi.size()>0){
            return *max_element(maxi.begin(),maxi.end());
        }
        return -1;
    }
};