class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> aa;
        vector<string> stringsss;
        string word;

        int i = 0;
        while (i < s.size()) {
            word.clear();
            while (i < s.size() && s[i] != ' ') {
                word += s[i++];
            }
            stringsss.push_back(word);
            i++; // Move past the space
        }

        if (pattern.size() != stringsss.size()) {
            return false; // Mismatch in pattern and word count
        }

        for (int i = 0; i < pattern.size(); ++i) {
            char ch = pattern[i];

            if (aa.find(ch) == aa.end()) {
                for (const auto& pair : aa) {
                    if (pair.second == stringsss[i]) {
                        return false; // Word already mapped to a different character
                    }
                }
                aa[ch] = stringsss[i];
            } else {
                if (aa[ch] != stringsss[i]) {
                    return false; // Character mapped to a different word
                }
            }
        }
        return true;
    }
};