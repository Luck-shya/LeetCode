#include <unordered_map>
#include <string>

class Solution {
public:
    int minSteps(std::string s, std::string t) {
        std::unordered_map<char, int> freq;

        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]--;
            freq[t[i]]++;
        }
        int pos=0;
        int neg=0;
        for(auto it = freq.begin();it!=freq.end();++it){
            if(it->second>0){
                pos+=it->second;
            }
            else{
                neg-=it->second;
            }
        }
        if(pos==neg){
            return pos;
        }
        else{
            return pos-neg;
        }

    }
};
