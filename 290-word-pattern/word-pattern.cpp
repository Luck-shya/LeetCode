
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> aa;
        vector<string> stringsss;
        string pushi;
        
        // Splitting the string into words
        for (char c : s) {
            if (c == ' ') {
                stringsss.push_back(pushi);
                pushi = "";
            } else {
                pushi += c;
            }
        }
        stringsss.push_back(pushi); // Add the last word
        
        if (pattern.size() != stringsss.size()) {
            return false; // Patterns and words count mismatch
        }
        
        for (int i = 0; i < pattern.size(); ++i) {
            char ch = pattern[i];
            
            if (aa.find(ch) == aa.end()) {
                for (const auto &pair : aa) {
                    if (pair.second == stringsss[i]) {
                        return false; 
                    }
                }
                aa[ch] = stringsss[i];
            } else {
                if (aa[ch] != stringsss[i]) {
                    return false; 
                }
            }
        }
        return true;
    }
};