#include <unordered_map>
#include <string>

class Solution {
public:
    int minSteps(std::string s, std::string t) {
        unordered_map<char, int> freq;
        int pos=0;
        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]--;
            freq[t[i]]++;
        }
        for(auto it = freq.begin();it!=freq.end();++it){
            pos+=abs(it->second);
        }
        return pos/2;
    }
};
